#include <bits/stdc++.h>
using namespace std;

//write strcmp function

int strcmp(string s1, string s2){
    
    if (s1.length() < s2.length()){
        return -1;
    }
    else if (s1.length() > s2.length()){
        return 1;
    }
    else{

        for (int i=0; i<s1.length(); i++){
            if (s1[i] < s2[i]){
                return -1;
            }
            else if (s1[i] > s2[i]){
                return 1;
            }
        }
        return 0;
    }
}

int main(){
    string s1 = "hello";
    string s2 = "hello";
    cout << strcmp(s1,s2) << endl;
    return 0;
}