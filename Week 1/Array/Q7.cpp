#include<iostream>//find next higher permutation
#include<bits/stdc++.h>
using namespace std;

void print_array(int a[],int num)
{
    for(int i=0;i<num;i++)
    {
        printf("%d ",a[i]);
    }
    return;
}

void next_permutation(int A[],int num)
{
    for(int i=num-1;i>=0;i--)
    {
        if(A[i]>A[i-1])
        {
            int small=A[i];
            int small_index=i;
            for(int k=i;k<num;k++)
            {
                if(A[k]<small)
                {
                    small=A[k];
                    small_index=k;
                }
            }
            int h=A[i-1];
            A[i-1]=small;
            A[small_index]=h;
            sort(A+i,A+num);
            return;
        }
    }
}

int main()
{
int array[]={3,8,2,7,6};
int size=sizeof(array)/sizeof(array[0]);
next_permutation(array,size);
print_array(array,size);
}