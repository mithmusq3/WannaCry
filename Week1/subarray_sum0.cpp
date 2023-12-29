#include<bits/stdc++.h>
using namespace std;

bool subarraySumZero(vector<int> arr){
    int n=arr.size();
    unordered_map<int, int> preSum;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==0 || preSum.find(sum)!=preSum.end()) return true;
        preSum[i]=sum;
    }
    return false;
}