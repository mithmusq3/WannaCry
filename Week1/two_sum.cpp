#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int comp=target-nums[i];
        if(mp.count(comp)){
            return {mp[comp],i};
        }
        mp[nums[i]]=i;
    }
    return {};
}
// another method would be to sort the array and use 2-pointer method