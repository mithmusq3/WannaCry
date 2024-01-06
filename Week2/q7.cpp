#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;
    return fact(n-1)*n;
}
int rankOfString(string s){
    vector<int> hash(256, 0);
    for(auto it:s) hash[it]++;
    for(int i=1; i<256; i++) hash[i]+=hash[i-1];

    int n= s.length();
    int mul=fact(n);
    int rank=0;
    
    for(int i=0; i<n; i++){
        mul/=n-i;
        rank+=hash[s[i]-1]*mul;
        for(int j=s[i]; j<256; j++) hash[j]--;
    }

    return rank+1;
}

int main(){
    string s="abc";
    cout<<rankOfString(s)<<endl;
    s="cab";
    cout<<rankOfString(s)<<endl;
}