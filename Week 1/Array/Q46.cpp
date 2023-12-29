
 
#include <bits/stdc++.h>//stickler thief
using namespace std;
 
int rec(int nums[], int n,int m)
{
    if (m>n)
        return 0;
    return max(nums[m] + rec(nums,n, m + 2),
               rec(nums,n, m + 1));
}
 
int findMaxSum( int a[], int n)
{
    return rec(a,n, 0);
}
 
// Driver Code
int main()
{
    // Creating the array
    int a[] = { 5, 5, 10, 100, 10, 5 };
    int n =sizeof(a)/sizeof(a[0]);
 
    // Function call
    cout << findMaxSum(a,n) << endl;
    return 0;
}