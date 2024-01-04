#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    string str="geeksforgeeg";
    stack<char> st;
    for(int i=0;i<str.size();i++){
        if(i==0){
            st.push(str[i]);
            continue;
        }
        st.push(str[i]);
        while(!st.empty()){
            char x=st.top();
            st.pop();
            if(st.empty()){
                st.push(x);
                break;
            }
            if(x==st.top()){
                st.pop();
            }
            else{
                st.push(x);
                break;
            }
        }
    }
    string ans="";
    while(!st.empty()){
        char x=st.top();
        st.pop();
        ans+=x;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}