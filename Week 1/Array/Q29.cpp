#include<bits/stdc++.h>//segregate 0 and 1
using namespace std;


void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}


void zero1seg(int a[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        while(a[i]==0)
        {
            i++;
        }
        while(a[j]==1)
        {
            j--;
        }
        if(i<j)
        {
            a[i]=0;
            a[j]=1;
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[]={1,0,1,0,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    zero1seg(arr,n);
    printarray(arr,n);
    return 0;
}