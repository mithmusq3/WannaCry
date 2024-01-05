#include<iostream>//find triplet
#include<bits/stdc++.h>    

using namespace std;

void find3(int A[],int m,int x)
{
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            for(int k=j+1;k<m;k++)
            {

                if(A[i]+A[j]+A[k]==x)
                {
                     printf("Yes \n");
                     printf("%d + %d + %d equals %d",A[i],A[j],A[k],x);
                     return;
                }
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
    find3(A,size,x);
    return 0;
}