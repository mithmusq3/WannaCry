#include<bits/stdc++.h>//alternate positive and negative
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void rearrange(int a[],int n)
{
int j=-1;
for(int i=0;i<n;i++)
{
    if(a[i]<0)
    {
        swap(&a[i],&a[++j]);
    }
}
int neg=0;
int pos=j+1;
while(pos<n && neg<pos)
{
    swap(&a[neg],&a[pos]);
    pos++;
    neg+=2;
}
}


int main()
{
    int arr[] = {-1, 2, -3, 4, 
                  5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}