#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int> nums){
    srand(time(NULL));
    int n=nums.size();
    for(int i=n-1; i>0; i--){
        int j= rand()%i+1;
        swap(nums[j], nums[i]);
    }
    return nums;
}

int main(){
    vector<int> nums={1, 2, 3, 4, 5, 6, 7, 8}; 
    nums=shuffle(nums);
    for(auto it: nums) cout<<it<<" ";
}