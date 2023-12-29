#include<iostream>//find missing number from array of n-1 numbers in range of 1-n
#include<bits/stdc++.h>
using namespace std;

int find_missing(int a[],int n)
{
    int temp[n+2];
    for(int j=0;j<n+2;j++)
    {
        temp[j]=0;
    }
    for(int k=0;k<n;k++)
    {
        if(temp[a[k]]==0)
        {
            temp[a[k]]=1;
        }
    }
    for(int k=1;k<n+2;k++)
    {
        if(temp[k]==0)
        {
           return k;
        }
    }
    return -1;
}

int main()
{
    int array[]={1,2,4,5,6};
    int total=sizeof(array)/sizeof(array[0]);
    cout<<find_missing(array,total)<<"\n";
    return 0;
}

