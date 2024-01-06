#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n=s.length();
    if(n==0 || n==1) return n; 
    int maxl=INT_MIN;
    unordered_map<char, int> mpp;
    mpp[s[0]]++;
    int l=0;
    int r=0;

    for(int i=1; i<n; i++){
        if(mpp[s[i]]==0){
            r++;
            mpp[s[r]]++;
        }
        else{
            r++;
            for(int j=l; j<r; j++){
                if(s[j]==s[r]){
                    l=j+1;
                    break;
                }
            }
        }
        maxl= max(maxl, r-l+1);
    }
    return maxl;
}

int main(){
    string s="abcabcbb";
    cout<<lengthOfLongestSubstring(s);
}