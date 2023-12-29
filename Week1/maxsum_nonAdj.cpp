#include<bits/stdc++.h>
using namespace std;

int maxSum(int ind, vector<int>&nums){
    if(ind==0) return nums[ind];
    if(ind<0) return 0;
    int pick = nums[ind]+maxSum(ind - 2, nums);
    int nonPick = maxSum(ind - 1, nums);
    return max(pick , nonPick);
}

int main(){
    vector<int> nums={5, 5, 10, 100, 10, 5};
    cout<<"Max sum= "<<maxSum(nums.size()-1, nums);
}