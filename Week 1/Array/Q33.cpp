#include<bits/stdc++.h>//rearrange the array
using namespace std;


void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}

void printarray(char a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}

void rearrange(char a[],int n)
{
    int j=0;
    int i;
    for(i=0;i<n,j<n;i++)
    {
        swap(&a[i],&a[j]);
        j+=2;
    }
    sort(a+i,a+n);
    return;
}

int main()
{
    char a[]={'a','1','b','2','c','3','d','4'};
    int size=sizeof(a)/sizeof(a[0]);
    rearrange(a,size);
    printarray(a,size);
    return 0;

}