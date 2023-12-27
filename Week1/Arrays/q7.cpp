#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<"-";
    return;
}

int nextPermutation(vector<int>& nums) {
    int n=nums.size();
    int i=n-1;
    for(;i>0;i--){
        if(nums[i]>nums[i-1]){
            break;
        }
    }
    if(i==0)return -1;
    else{
        for(int j=n-1;j>i-1;j--){
            if(nums[j]>nums[i-1]){
                swap(nums[j],nums[i-1]);
                reverse(nums.begin()+i,nums.end());
                break;
            }
        }
    }
    return 0;
}

int main(){
    vector<int> arr1 = {2,2,1,1};
    int res=nextPermutation(arr1);
    if(res==-1)cout<<"-1";
    else printVector(arr1);
    return 0;
}
