#include <iostream>
#include <string>
using namespace std;
int strCmp(string& str1,string& str2){
    for(int i=0;i<min(str1.size(),str2.size());i++){
        if(str1[i]>str2[i])return 1;

        if(str1[i]<str2[i])return -1;
    }
    if(str1.size()>str2.size())return 1;
    if(str1.size()<str2.size())return -1;
    return 0;
}
int main() {
    string str1="holaamigo";
    string str2="adiosamigo";
    int ans = strCmp(str1,str2);
    cout<<ans;
    return 0;
}
