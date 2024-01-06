//maximum subsequence sum sich that no 2 elements are adjacent
#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>& nums, int idx, vector<int>& dp){
	if (idx >= nums.size())
		return 0;
	if (dp[idx] != -1)
		return dp[idx];
	return dp[idx]
		= max(rec(nums, idx + 1, dp),
				nums[idx] + rec(nums, idx + 2, dp));
}

int findMaxSum(vector<int>& nums, int N){
	vector<int> dp(N + 1, -1);
	return rec(nums, 0, dp);
}


int main(){
	vector<int> arr = { 5, 5, 10, 100, 10, 5 };
	int N = arr.size();
    cout << findMaxSum(arr, N) << endl;
	return 0;
}
