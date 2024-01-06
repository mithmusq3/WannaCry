#include<bits/stdc++.h>
using namespace std;

vector<int> KMPalgo(string s, string pat){
    int ls=s.length();
    int lp=pat.length();

    vector<int> lps(lp, 0);
    int i=1;
    int prevlps=0;
    while(i<lp){
        if(lps[i]==lps[prevlps]){
            lps[i]=prevlps + 1;
            i++;
            prevlps++;
        }
        else if(prevlps==0){  //lps[i]!=lps[prevlps] and prevlps=0
            lps[i]=0;
            i++;
        }
        else{  //lps[i]!=lps[prevlps] and prevlps!=0
            prevlps=lps[prevlps-1];
        }
    }
    vector<int> ans;
    i=0;
    int j=0;
    while(i < ls){
        if(s[i]==pat[j]){
            i++;
            j++;
        }
        else{
            if(j==0) i++;
            else{
                j=lps[j-1];
            }
        }

        if(j==lp){
            if(i!=ls) ans.push_back(i-lp);
            j=lps[j-1];
        }
    }
    return ans;
}

int main(){
    string s="ABAABABBCD";
    string pat="ABA";
    vector<int> ans= KMPalgo(s, pat);
    for(auto it:ans){
        cout<<"pattern found at "<<it<<endl;
    }
}