#include <bits/stdc++.h>
using namespace std;

//Lexicographic rank of a string

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*fact(n-1);
}

int countSmaller(string s, int index){
    int count = 0;
    for(int i=index+1; i<s.length(); i++){
        if(s[i] < s[index]){
            count++;
        }
    }
    return count;
}

int lexicographicRank(string s){
    int rank = 1;
    int n = s.length();
    int mul = fact(n);
    
    for (int i=0; i<n; i++){
        mul /=(n-i);
        rank += countSmaller(s,i)*mul;
    }
    return rank;
}

int main(){
    string s = "string";
    cout << lexicographicRank(s) << endl;
    return 0;
}