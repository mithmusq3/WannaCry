#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int cnt=0;
    int el;
    int n=nums.size();
    for(int i=0; i<n; i++){
        if(cnt==0){
            cnt++;
            el=nums[i];
        }
        else if(el==nums[i]) cnt++;
        else cnt--;
    }
    int cntel=0;
    for(auto it:nums){
        if(it==el) cntel++;
    }
    if(cntel>n/2) return el;
    return -1;
}