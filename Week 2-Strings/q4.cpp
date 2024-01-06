//Reverse words in a given string
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string x){
    string rev = "", temp = "";
    for(auto i: x){
        if(i == ' '){
            rev = temp + " " + rev;
            temp = "";
        }
        else
            temp += i;
    }
    rev = temp + " " + rev;
    return rev;
}

int main(){
    cout << reverseWords("hello world") << endl;
    return 0;
}
