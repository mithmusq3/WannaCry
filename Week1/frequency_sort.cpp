#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char,int> m;
    for(auto it:s) m[it]++;
    vector<pair<char,int>> v;
    for(auto it:m) v.push_back({it.first,it.second});
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j].second>v[i].second) swap(v[i],v[j]);
        }
    }
    string ans="";
    for(auto it:v){
        for(int i=0;i<it.second;i++) ans+=it.first;
    }
    return ans;
}