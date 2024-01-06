#include<bits/stdc++.h>
using namespace std;

string runLengthEncode(string s){
    int n=s.length();
    char temp=s[0];
    int cnt=0;

    int i=0;
    string ans="";
    while(i<n){
        while(s[i]==temp){
            cnt++;
            i++;
        }
        ans+=temp;
        ans+=('0'+cnt);
        temp=s[i];
        cnt=0;
    }
    return ans;
}

int main(){
    string s="wwwwaaadexxxxxx";
    cout<<runLengthEncode(s);
}