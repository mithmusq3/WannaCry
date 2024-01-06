#include<bits/stdc++.h>
using namespace std;

bool match(int i, int j, string pat, string s, vector<vector<int>> &dp){
    if(i<0 && j<0) return true;
    else if(i<0 && j>=0) return false;
    else if(i>=0 && j<0){
        for(int ii=0; ii<i; ii++){
            if(pat[ii]!='*') return false;
        }
        return true;
    }
    if(dp[i][j]!=-1) return dp[i][j];

    if(pat[i] == s[j] || pat[i]=='?') return dp[i][j]=match(i-1, j-1, pat, s, dp);
    if(pat[i] == '*') return dp[i][j]= match(i-1, j, pat, s, dp) | match(i, j-1, pat, s, dp);
    return dp[i][j]=false;
}

int main(){
    string s="aaaabcc";
    string pat="a*b?c";
    int m=s.length();
    int n=pat.length();
    vector<vector<int>>dp(n, vector<int>(m, -1));
    if(match(n-1, m-1, pat, s, dp)) cout<<"true";
    else cout<<"false";
}