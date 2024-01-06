#include<bits/stdc++.h>
using namespace std;

void permutate(string s, int l, int r){
    if(l==r) {cout<<s<<" "; return;}
    while(r>=l){
        permutate(s, l+1, s.length()-1);
        swap(s[l], s[r]);
        r--;
    }
}

int main(){
    string s="abcd";
    permutate(s, 0, s.length()-1);
}