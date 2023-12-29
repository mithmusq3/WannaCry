#include<bits/stdc++.h>
using namespace std;

int maxRep(vector<int> nums){
    int n=nums.size();
    for(int i=0; i<n; i++){
        nums[nums[i]%n]+=n;
    }
    int maxi=INT_MIN;
    int index=0;
    for(int i=0; i<n; i++){
        if(nums[i]>maxi){
            index=i;
            maxi=nums[i];
        }
    }
    if(index==0) return n;
    else return index;
}

int main(){
    vector<int> nums= {2, 3, 3, 5, 3, 4, 1, 7};
    cout<<maxRep(nums);
}