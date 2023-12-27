#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<"-";
    return;
}

vector<vector<int>> threeSum(vector<int>& nums,int target) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum>target){
                k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                vector<int> temp={nums[i],nums[j],nums[k]};
                v.push_back(temp);
                while(j<k && nums[k]==nums[k-1])k--;
                k--;
                while(j<k && nums[j]==nums[j+1])j++;
                j++;
            }}
    }
    return v;
}
int main(){
    vector<int> arr1 = {0,1,2,5,7,9,3,4};
    int target = 6;
    vector<vector<int>> v= threeSum(arr1,target);
    if(v.size()>0)printVector(v[0]);
    return 0;
}
