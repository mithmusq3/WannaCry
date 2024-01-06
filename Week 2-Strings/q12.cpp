//check if 2 strings are anagrams of each other
#include <bits/stdc++.h>
using namespace std;
//no. of chars = 256
bool anagram(string x, string y){
    vector<int> freq (256,0);
    if(x.length() != y.length())
        return false;
    for(int i = 0; i < x.length();i++){
        freq[x[i]]++;
        freq[y[i]]--;
    }
    for(int i = 0; i<256; i++){
        if(freq[i] != 0)
            return false;
    }
    return true;
}

int main(){
    cout << anagram("--+","+--");
    return 0;
}
