//Maximum Product Subarray
#include <bits/stdc++.h> 
using namespace std; 

int largestSubarrayProduct(int a[], int n){
    int maxP = a[0];
    int currMax = a[0];
    int currMin = a[0];
    for(int i = 1; i<n; i++){
        int temp = max({a[i], currMax * a[i], currMin * a[i]});
        currMin = min({a[i], currMax * a[i], currMin * a[i]});
        currMax = temp;
        maxP = max(maxP, currMax);
    }
    return maxP;
}

int main()
{
    int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Sub array product is " << largestSubarrayProduct(arr, n);
    return 0;
}