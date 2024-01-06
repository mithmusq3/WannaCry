#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> arr){
    int n=arr.size();
    int maxi=INT_MIN;
    stack<int> st;
    for(int i=n-1; i>=0; i--){
        if(arr[i]>maxi){
            st.push(arr[i]);
            maxi=arr[i];
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    fun(arr);
    return 0;
}