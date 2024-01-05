#include<bits/stdc++.h>//find minimum difference
using namespace std;
void min_diff(int a[],int n)
{   
    sort(a,a+n);
    int b[n-1];
    for(int i=0;i<n-1;i++)
    {
        b[i]=a[i+1]-a[i];   
    }
    int minimum=b[0];
    int minimum_index=0;
    for(int i=0;i<n-1;i++)
    {
        if(b[i]<minimum)
        {
            minimum=b[i];
            minimum_index=i;
        }  
    }
    printf("element1 is %d and element2  is %d and minimum difference is %d",a[minimum_index],a[minimum_index+1],b[minimum_index]);
}

int main()
{
    int arr[]={1,2,90,10,110};
    int n=sizeof(arr)/sizeof(arr[0]);
    min_diff(arr,n);
    return 0;
}