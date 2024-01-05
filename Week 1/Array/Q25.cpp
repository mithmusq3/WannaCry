#include<bits/stdc++.h>//product of other elements in array except itself
using namespace std;
void productArray(int a[],int n)
{
    if(n==1)
    {
        cout<<a[0];
        return;
    }
    int * left=new int[sizeof(int)*n];
    int * right=new int[sizeof(int)*n];
    int * prod=new int[sizeof(int)*n];

    int i,j;
    left[0]=1;
    right[n-1]=1;
    for(int i=1;i<n;i++)
    {
        left[i]=left[i-1]*a[i-1];
    }
    for(int j=n-2;j>=0;j--)
    {
        right[j]=right[j+1]*a[j+1];
    }
    for(int i=0;i<n;i++)
    {
        prod[i]=left[i]*right[i];
    }
    for(int j=0;j<n;j++)
    {
        cout<<prod[j]<<" ";
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"The product array is"<<" ";
    productArray(arr,size);
}