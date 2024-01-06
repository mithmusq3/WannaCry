#include <bits/stdc++.h>
using namespace std;

//Remove characters from the first string which are present in the second string

void eraseCommon(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();
    string res = "";
    int hash[256] = {0};
    for(int i=0; i<n2; i++){
        hash[s2[i]]++;
    }
    for(int i=0; i<n1; i++){
        if(hash[s1[i]] == 0){
            res += s1[i];
        }
    }
    cout<<res<<endl;
}

int main(){
    string s1 = "test string";
    string s2 = "mask";
    eraseCommon(s1, s2);
    return 0;
}