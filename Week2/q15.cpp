#include<bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {
    int m=s.length();
    int n=t.length();
    if(m<n) return "";
    unordered_map<char, int> ms;
    unordered_map<char, int> mt;
    for(auto it:t) mt[it]++;

    int count=0;
    int l=0;
    int r=0;
    int cur_len=0;
    int minl=INT_MAX;
    int starti=0, endi=-1;

    for(int i=0; i<m; i++){
        ms[s[i]]++;


        if(ms[s[i]]<=mt[s[i]]){
            count++;
        }
        if(count==n){
            r=i;
            while(ms[s[l]]>mt[s[l]]){
                if(mt[s[l]]) ms[s[l]]--;
                l++;
            }
            cur_len=r-l+1;
            if(cur_len < minl){
                starti=l;
                endi=r;
                minl=cur_len;
            }
            ms[s[l]]--;
            l++;
            count--;
        }
    }

    string ans="";
    for(int i=starti; i<=endi; i++) ans+=s[i];
    return ans;
}

int main(){
    string s="ADOBECODEBANC";
    string t="ABC";
    cout<<minWindow(s, t);
}