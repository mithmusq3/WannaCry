//length of longest substring without repeating characters
#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string x){
    int n = x.length();
    int res = 0;
    for(int i = 0; i<n; i++){
        vector<bool> visited(256);
        for(int j = i; j<n; j++){
            if(visited[x[j]])
                break;
            else{
                res = max(res, j-i+1);
                visited[x[j]] = true;
            }
        }
    }
    return res;
}

int main(){
    cout << longestSubstring("aditya") << endl;
    return 0;
}