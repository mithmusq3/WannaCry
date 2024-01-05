#include<iostream>//number occuring odd number of times and returns -1 if no such number presesnt
#include<bits/stdc++.h>
using namespace std;


int odd_occurances(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            return a[i];
        }
    }
return -1;
}

int main()
{
    int array[]={1,1,2,3,4,2,3,4,4,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    cout << odd_occurances(array,size);
    return 0;
}