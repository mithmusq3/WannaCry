#include<bits/stdc++.h>//let-sum==right-sum
using namespace std;


int sum(int a[],int i,int j)
{   int sum=0;
    while(i<=j)
    {
        sum+=a[i];
        i++;
    }
    return sum;
}

void element(int a[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        if(sum(a,0,i-1)==sum(a,i+1,n-1))
        {
            printf("%d at index &=%d",a[i],i);
            return;
        }
    }
    printf("No such element found");
    return;
}

int main()
{
    int arr[]={10,10,90,10,110};
    int n=sizeof(arr)/sizeof(arr[0]);
    element(arr,n);
    return 0;
}