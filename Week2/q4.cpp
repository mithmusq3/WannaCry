#include<bits/stdc++.h>
using namespace std;

void reverse_words(string s){
    int n=s.length();

    int l=0;
    int wordStart=0;
    int i=0;
    int r;
    while(i<n){
        while(s[i]!=' ' && s[i]!='\0') i++;
        r=i-1;
        while(l<=r){
            swap(s[l], s[r]);
            l++;
            r--;
        }
        while(s[i]==' ') i++;
        l=i;
    }
    for(int i=n-1; i>=0; i--) cout<<s[i];
    return;
}

int main(){
    string s="you are pretty";
    reverse_words(s);
}