//implement atoi function
#include <bits/stdc++.h>
using namespace std;

int atoifn(string x){
    int res = 0;
    for(int i = 0; i<x.length(); i++)
        res = res*10 + (x[i] - '0');
    return res;
}

int main(){
    cout << atoifn("5201") << endl;
    return 0;
}