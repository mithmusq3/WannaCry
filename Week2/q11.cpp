#include<bits/stdc++.h>
using namespace std;

int myStrcmp(string a, string b){
    int i=0;
    for(int i=0; a[i]&&b[i]; i++){
        if(a[i]==b[i] || (a[i]^32)==b[i]) continue;
        else break;
    }

    if(a[i]==b[i]) return 0;

    if((a[i] | 32) < (b[i] | 32)) return -1;
    return 1;
}

int main(){
    string a="abc";
    string b="Def";
    cout<<myStrcmp(a, b);
}