#include <bits/stdc++.h>
using namespace std;

//Length of longest substring without repeating characters

int maxSubString(string s){
    if (s.length() <2){
        return s.length();
    }
    int count[256] = {0};
    int l=0, r=1, maxlen = 0;
    int n = s.length();

    count[s[l]]++;

    while(l<=n && r<=n && l<=r){
        if (count[s[r]] != 0){
            maxlen = max(maxlen, r-l);
            l=r;
            r++;
            for(int i=0; i<256; i++){
                count[i] = 0;
            }
        }
        else{
            count[s[r]]++;
        }
        r++;
    }
    return max(maxlen,r-l);
}

int main(){
    string s = "ABCDEFGABEF";
    cout << "Max Substring length : " << maxSubString(s) << endl;
}