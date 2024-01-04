#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s2="holaamigo";
    string s1="adiosamigo";
    vector<int> v(26,0);
    for(int i=0;i<s2.size();i++){
        v[s2[i]-'a']++;
    }
    for(int i=0;i<s1.size();i++){
        if(v[s1[i]-'a']==0)cout<<s1[i];
    }
    return 0;
}