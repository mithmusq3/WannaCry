//Largest Sum Contiguous Subarray
#include <bits/stdc++.h> 
using namespace std; 

int largestSubarraySum(int a[], int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i<n; i++){
        currSum += a[i];
        if(currSum > maxSum)
            maxSum = currSum;
        if(currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

