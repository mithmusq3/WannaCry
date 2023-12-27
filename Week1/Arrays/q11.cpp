#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<"-";
    return;
}


vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> v;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    for(int i=0;i<n-3;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        for(int j=i+1;j<n-2;j++){
            if(j>i+1 && nums[j]==nums[j-1])continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                sum+=nums[l];

                if(sum>target){
                    l--;
                }
                else if(sum<target){
                    k++;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                    v.push_back(temp);
                    while(k<l && nums[k]==nums[k+1])k++;
                    k++;
                    while(k<l && nums[l]==nums[l-1])l--;
                    l--;

                }

            }
        }
    }
    return v;
}
int main(){
    vector<int> arr1 = {0,1,2,5,7,9,3,4};
    int target = 6;
    vector<vector<int>> v= fourSum(arr1,target);
    if(v.size()>0)printVector(v[0]);

    return 0;
}
