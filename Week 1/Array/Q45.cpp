#include<bits/stdc++.h>//subarray with equal 1 and 0
using namespace std;
void subarray(int a[],int n)
{
    int sum=0;
    int maxsize=-1,startindex;
    for(int i=0;i<n-1;i++)
    {
        sum=((a[i]==0)?-1:1);
        for(int j=i+1;j<n;j++)
        {
            (a[j]==0)?(sum+=-1):(sum+=1);
            if(sum==0 && maxsize<j-i+1)
            {
                maxsize=j-i+1;
                startindex=i;
            }
        }
    }
    if(maxsize==-1)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<startindex<<"to"<<startindex+maxsize-1;
    }
    return;
}
int main()
{
    int a[]={1,0,0,1,0,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    subarray(a,n);
    return 0;
}