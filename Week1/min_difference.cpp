#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    set<vector<int>> st;
    int mind=arr[1]-arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]-arr[i-1]==mind) st.insert({arr[i-1], arr[i]});
        else if(arr[i]-arr[i-1]<mind){
            mind=arr[i]-arr[i-1];
            st.clear();
            st.insert({arr[i-1], arr[i]});
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}