//given a string find its first non-repeating character
#include<bits/stdc++.h>
using namespace std;

char firstNonRepeating(string x){
    unordered_map<char, int> mp;
    for(auto i: x)
        mp[i]++;
    for(auto i: x)
        if(mp[i] == 1)
            return i;
}

int main(){
    cout << firstNonRepeating("geeksforgeeks") << endl;
    return 0;
}