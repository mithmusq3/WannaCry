#include <bits/stdc++.h>
using namespace std;

//Run length encoding

string lengthEncoding(string s){
    int count = 1;
    string res = "";
    for(int i=1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            res += s[i-1] + to_string(count);
            count = 1;
        }
    }
    return res;
}

int main(){
    string s = "wwwwaaadexxxxxxywww";
    cout << lengthEncoding(s) << endl;
    return 0;
}