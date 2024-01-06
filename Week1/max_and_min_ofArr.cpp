#include<bits/stdc++.h>
using namespace std;

void minMax(vector<int> nums){
    int n=nums.size();
    int min=nums[0];
    int max=nums[0];
    if(n==1){
        cout<<"min="<<min<<" max="<<max;
        return;
    }
    for(int i=1; i<n; i++){
        if(nums[i]<min) min=nums[i];
        else if(nums[i]>max) max=nums[i];
    }
    cout<<"min="<<min<<" max="<<max;
    return;
}

int main(){
    vector<int> nums={ 1000, 11, 445, 1, 330, 3000 };
    minMax(nums);
}