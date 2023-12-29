#include<bits/stdc++.h>//find inversion count
using namespace std;
int getInvCount(int a[],int n)
{
    int invcount=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                invcount++;
            }
        }
    }
    return invcount;
}
int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Number of inversions are "
         << getInvCount(arr, n);
    return 0;
}