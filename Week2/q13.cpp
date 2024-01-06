#include<bits/stdc++.h>
using namespace std;

void checkAnagram(string a, string b){
    unordered_map<char, int> mpp;
    for(auto it: a) mpp[it]++;
    for(auto it: b) mpp[it]--;
    for(auto it: mpp){
        if(it.second!=0){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
    return;
}

int main(){
    string a="abcd";
    string b="bcad";
    checkAnagram(a, b);
    string c="cat";
    string d="cath";
    checkAnagram(c, d);
}