#include<bits/stdc++.h>
using namespace std;

void subarraySumk(vector<int> nums, int k){
    int n= nums.size();
    unordered_map<int, int> preSum;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=nums[i];

        if(sum==k){
            cout<<0<<" "<<i;
            return;
        }
        else if(preSum.find(sum-k)!=preSum.end()){
            cout<<preSum[sum-k]+1<<" "<<i;
            return;
        }
        else preSum[sum]=i;
    }
}

int main()
{
    vector<int> nums = { 15, 2, 4, 8, 9, 5, 10, 23 };
    subarraySumk(nums, 23);
}