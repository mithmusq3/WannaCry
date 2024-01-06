#include <bits/stdc++.h>
using namespace std;

//Maximum sum such that no two elements are adjacent

int rec(vector<int>& nums, int id, int dp[]){
    if (id >=nums.size()) return 0;
    if (dp[id]!= -1){
        return dp[id];
    }
    else{
        return dp[id] = max(rec(nums,id+1,dp), nums[id]+rec(nums,id+2,dp));
    }

}

int main(){
    vector<int> arr = {5, 5, 10, 100, 10, 5};
    int dp[arr.size()];
    for (int i=0; i<sizeof(dp)/sizeof(dp[0]); i++){
        dp[i] = -1;
    }
    cout << "Maximum sum: " << rec(arr, 0, dp);
}