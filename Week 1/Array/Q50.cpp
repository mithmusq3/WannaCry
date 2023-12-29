
#include<bits/stdc++.h>//kth smallest element
using namespace std;

void kLargest(int a[],int n,int k)
{
    sort(a,a+n);
    cout<<"Kth smallest element is"<<a[k-1];
}
int main()
{
    int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    kLargest(arr, n, k);
}
