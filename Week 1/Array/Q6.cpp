#include<iostream>//find next smallest palindriome
using namespace std;

void  Print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


int all9s(int * num,int n)
{
    for(int i=0;i<n;i++)
    {
        if(num[i]!=9)
        {
            return 0;
        }
    }
    return 1;
}

void Gnp(int num[],int n)
{
    int mid=n/2;
    bool leftsmall=false;
    int i=mid-1;
    int j=(n%2)?mid+1:mid;
    while(i>=0 && num[i]==num[j])
    {
        i--;
        j++;
    }
    if(i<0||num[i]<num[j])
    {
        leftsmall=true;
    }
    while(i>=0)
    {
        num[j]=num[i];
        i--;
        j++;
    }
    if(leftsmall==true)
    {
        int carry=1;
        i=mid-1;
        if(n%2==1)
        {
            num[mid]+=carry;
            carry=num[mid]/10;
            num[mid]%10;
            j=mid+1;
        }
        else
        {
            j=mid;
        }
        while(i>=0)
        {
            num[i]+=carry;
            carry=num[i]/10;
            num[i]%10;
            num[j++]=num[i--];

        }
    }
}



void GenerateNextPalindrome(int num[],int n)
{
    if(all9s(num,n))
    {
        printf("1 ");
        for(int j=1;j<n;j++)
        {
            printf("0 ");
        }
        printf("1 ");
    }
    else
    {
        Gnp(num,n);
        Print(num,n);
    }
}


int main()
{
    int a[]={1,2,3,4,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    GenerateNextPalindrome(a,size);
    return 0;
}