#include<bits/stdc++.h>
using namespace std;

// rotate right
void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    int d=n-(k%n);
    reverse(nums.begin(), nums.begin()+d);
    reverse(nums.begin()+d, nums.begin()+n);
    reverse(nums.begin(), nums.end());
}