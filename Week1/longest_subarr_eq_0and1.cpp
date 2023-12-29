#include<bits/stdc++.h>
using namespace std;

int longestSubarr(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0) arr[i]=-1;
        else arr[i]=1;
    }
    unordered_map<int, int> preSum;
    int maxlen=0;
    int sum=0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
        if(sum==0) maxlen=max(maxlen, i+1);
        else if(preSum.find(sum)!=preSum.end()){
            maxlen=max(maxlen, i-preSum[sum]);
        }
        preSum[sum]=i;
    }
    return maxlen;
}

int main(){
    vector<int> nums={ 1, 0, 0, 1, 0, 1, 1 };
    cout<<longestSubarr(nums);
}