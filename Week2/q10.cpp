#include<bits/stdc++.h>
using namespace std;

void first_non_repeating(string s){
    unordered_map<char, int> mpp;
    for(auto it:s) mpp[it]++;
    for(auto it:s){
        if(mpp[it]==1){
            cout<<it;
            return;
        }
    }
    cout<<"No non repeating character found";
    return;
}

int main(){
    string s="aabbbbdddceefff";
    first_non_repeating(s);
}