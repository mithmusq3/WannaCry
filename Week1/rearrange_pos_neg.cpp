#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int posInd=0;
    int negInd=1;
    int n=nums.size();
    vector<int> ans(n, 0);
    for(int i=0; i<n; i++){
        if(nums[i]>0){
            ans[posInd]=nums[i];
            posInd+=2;
        }
        else{
            ans[negInd]=nums[i];
            negInd+=2;
        }
    }
    return ans;
}