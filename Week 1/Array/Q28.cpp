//Lomut0 partition
#include<bits/stdc++.h>//segregate even,odd
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
        printf("%d",a[i]);
    }
}


void even_odd_seg(int a[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            j++;
            swap(a[i],a[j]);
        }
    }
    return;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    even_odd_seg(arr,n);
    printarray(arr,n);
    return 0;
}