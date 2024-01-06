#include<bits/stdc++.h>
using namespace std;

string rremove(string s, stack<char> &st, int ind){
    if(ind>=0) st.push(s[ind]);
    string ans="";
    if(ind>0) ans=rremove(s, st, ind-1);
    while(!st.empty()){
        char t=st.top();
        st.pop();
        ans+=t;
        while(!st.empty() && st.top()==t) st.pop();
    }
    return ans;
}

int main(){
    string s="azzcxxxef";
    stack<char> st;
    cout<<rremove(s, st, s.length()-1);
}