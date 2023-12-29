#include <bits/stdc++.h>// Function to find first positive missing number
using namespace std;
 
int firstMissingPositive(int nums[],int n)
{
    sort(nums,nums+n);
    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == ans) {
            ans++;
        }
    }
    return ans;
}
 

int main()
{
    int  arr[] = { 0, 10, 2, -10, -20 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"First missing positive number";
    cout << firstMissingPositive(arr,n);
    return 0;
}