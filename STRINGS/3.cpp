#include <bits/stdc++.h>
using namespace std;

//First non repeating character in a string

void firstNonRepeat(string s){
    int count[256] = {0};
    for(int i=0; i<s.length(); i++){
        count[s[i]]++;
    }
    for(int i=0; i<s.length(); i++){
        if(count[(int)s[i]] == 1){
            cout << s[i] << endl;
            return;
        }
    }
    cout << "No non repeating character" << endl;
}

int main(){
    string s = "aabbcddeeff";
    firstNonRepeat(s);
    return 0;
}

