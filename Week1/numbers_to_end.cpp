#include<bits/stdc++.h>
using namespace std;

void fun(string s){
    int n=s.length();
    int i=0;
    int j=1;
    string ans="";
    while(i<n){
        ans+=s[i];
        i+=2;
    }
    while(j<n){
        ans+=s[j];
        j+=2;
    }
    cout<<ans;
}

int main(){
    string s="a1b2c3d4";
    fun(s);
}