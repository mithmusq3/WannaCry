#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    set<int> st;
    for(auto it:nums){
        if(st.find(it)!=st.end()) st.erase(it);
        else st.insert(it);
    }
    vector<int> ans;
    for(auto it:st) ans.push_back(it);
    return ans;
}