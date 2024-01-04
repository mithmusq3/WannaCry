#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s2="amigo";
    string s1="gamio";
    vector<int> v1(26,0);
    vector<int> v2(26,0);
    for(int i=0;i<s2.size();i++){
        v2[s2[i]-'a']++;
    }
    for(int i=0;i<s1.size();i++){
        v1[s1[i]-'a']++;
    }
    if(v1==v2)cout<<"true";
    else cout<<"false";
    return 0;
}