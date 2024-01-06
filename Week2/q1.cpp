#include<bits/stdc++.h>
using namespace std;

void reverse(string s, int i){
    i++;
    if(i<s.length()-1) reverse(s, i);
    cout<<s[i];
}

int main(){
    string s="hello there";
    reverse(s, -1);
}