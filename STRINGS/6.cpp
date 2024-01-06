#include <bits/stdc++.h>
using namespace std;

//Move all even positioned elements to end of string

void moveEven(string s){
    int n = s.length();
    for (int i=0; i<n; i+=2){
        s.push_back(s[i]);
    }
    for (int i = 1; i<n; i+=2){
        s.push_back(s[i]);
    }
    s.erase(0, s.length()/2);
    cout << s << endl;
}

int main(){
    string s = "a1b2c3d4e5f6g7h8i9j1k2l3m4n5o6p7q8r9s1t2u3v4w5x6y7z8";
    moveEven(s);
    return 0;
}