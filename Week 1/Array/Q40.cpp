#include<bits/stdc++.h>//rotate by d units left
using namespace std;

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void rotate(int a[],int n,int d)
{
    int temp[n];
    int k=0;
    for(int i=d;i<n;i++)
    {
        temp[k]=a[i];
        k++;
    }
    for(int i=0;i<d;i++)
    {
        temp[k]=a[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=temp[i];
    }
}


int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;

    rotate(arr,n,d);
    printarray(arr,n);
    return 0;
}