#include<bits/stdc++.h>
using namespace std;

int cnt=0;

void merge(vector<int> &nums, int low, int mid, int high){
    vector<int> temp;
    int left=low, right=mid+1;
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            cnt+=mid-left+1;
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        nums[i]=temp[i-low];
    }
}
void mergeSort(vector<int> &nums, int low, int high){
    if(low==high) return;
    int mid=low+(high-low)/2;

    mergeSort(nums, low, mid);
    mergeSort(nums, mid+1, high);
    merge(nums, low, mid, high);
}


int main(){
    vector<int> arr={8, 4, 2, 1};
    mergeSort(arr, 0, arr.size()-1);
    cout<<"count= "<<cnt;
}