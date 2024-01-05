#include<bits/stdc++.h>//generating random permutation
#include<stdlib.h>
#include<time.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void randomise(int a[],int n)
{
    srand(time(NULL));
    for(int i=n-1;i>0;i--)
    {
        int j=rand()%(i+1);
        swap(&a[i],&a[j]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    randomise(arr,n);
    printarray(arr,n);
    return 0;
}