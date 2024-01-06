#include <bits/stdc++.h>
using namespace std;

//Anagram Checker

void anagram(string s1, string s2){
    if (s1.length() != s2.length()){
        cout << s1 << " is not an anagram of " << s2 << endl;
        return;
    }
    int count1[256] = {0};
    int count2[256] = {0};

    for (int i=0; i<s1.length(); i++){
        count1[s1[i]]++;
    }
    for (int i=0; i<s2.length(); i++){
        count2[s2[i]]++;
    }
    for (int i=0; i<s1.length(); i++){
        if (count1[s1[i]] != count2[s1[i]]){
            cout << s1 << " is not an anagram of " << s2 << endl;
            return;
        }
    }
    cout << s1 << " is an anagram of " << s2 << endl;
    return;

}

int main(){
    string s1 = "listen";
    string s2 = "silent";
    anagram(s1,s2);
}