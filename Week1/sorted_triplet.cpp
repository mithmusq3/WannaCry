#include<bits/stdc++.h>
using namespace std;

void increasingTriplet(vector<int>& nums) {
    if(nums.size()<3) cout<<"Does not exist";
    int mine=nums[0];
    int mine2=INT_MAX;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]==mine) continue;
        else if(nums[i]<mine) mine=nums[i];
        else if(nums[i]<=mine2) mine2=nums[i];
        else {
            cout<<mine<<" "<<mine2<<" "<<nums[i];
        }
    }
    cout<<"Does not exist";
}