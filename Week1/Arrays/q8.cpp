#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool twoSum(vector<int>& nums, int target) {
    vector<int> twoSum;
    map<int,int> mp;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int a=nums[i];
        int rem=target-a;
        if(mp.find(rem)!=mp.end()){
            return true;
        }
        mp[a]=i;
    }
    return false;
}
int main(){
    vector<int> arr1 = {1,2,5,7,9};
    int target = 13;
    bool res=twoSum(arr1,target);
    string result="no";
    if(res)result="yes";
    cout<<result;
}