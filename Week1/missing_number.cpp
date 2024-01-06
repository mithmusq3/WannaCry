#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int sum= (n*(n+1))/2;
    int arrsum=0;
    for(auto it:nums) arrsum+=it;
    return sum-arrsum;
}