#include<bits/stdc++.h>
using namespace std;

void print_dupes(string s){
    unordered_map<char, int> mpp;
    for(auto it:s) mpp[it]++;
    for(auto it:mpp){
        if(it.second!=1){
            cout<<it.first<<" count= "<<it.second<<endl;
        }
    }
}

int main(){
    string s= "absoiacalmoaabb";
    print_dupes(s);
}