#include <bits/stdc++.h>
using namespace std;

//Print all duplicates in a string

void printDuplicates(string s){
    int count[256] = {0};
    for(int i=0; i<s.length(); i++){
        count[s[i]]++;
    }
    for(int i=0; i<256; i++){
        if(count[i] > 1){
            cout << (char)i << ", count = " << count[i] << endl;
        }
    }
}

int main(){
    string s = "test string";
    printDuplicates(s);
    return 0;
}