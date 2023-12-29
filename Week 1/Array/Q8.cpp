#include<iostream>//find pair of numbers with sum x
#include<bits/stdc++.h>

using namespace std;

void find2(int A[],int m,int x)
{
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(A[i]+A[j]==x)
            {
                printf("Yes \n");
                printf("%d and %d",A[i],A[j]);
                return;
            }
        }
    }
printf("No");
return;
}

int main()
{
    int A[]={1,-1,2,1,0};
    int size=sizeof(A)/sizeof(A[0]);
    int x=2;
    find2(A,size,x);
    return 0;
}