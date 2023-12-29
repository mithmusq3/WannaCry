#include<bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int> nums){
    int n=nums.size();
    int left=0;
    int right=n-1;
    while(left < right){
        while(left<n && nums[left]==0) left++;
        while(right>=0 && nums[right]==1) right--;
        if(left < right) swap(nums[left], nums[right]);
    }
    return nums;
}

int main() 
{ 
    vector<int> nums = { 0, 1, 0, 1, 1, 1 }; 
    vector<int> ans=sortArray(nums);

    for(auto it:ans) cout<<it<<" ";
}