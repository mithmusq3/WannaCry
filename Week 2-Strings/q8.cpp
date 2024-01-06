//run length encoding of string
#include <bits/stdc++.h>
using namespace std;

void printRLE(string x){
    int n = x.length();
    for(int i = 0; i < n; i++){
        int count = 1;
        while(i < n-1 && x[i+1] == x[i]){
            count++;
            i++;
        }
        cout << x[i] << count;
    }
}

int main(){
    printRLE("aaaddspppooooo");
    return 0;
}