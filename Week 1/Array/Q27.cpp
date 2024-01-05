#include<bits/stdc++.h>//sort by frequency
using namespace std;

struct element{
    int count;
    int index;
    int val;
};

bool compare(struct element a,struct element b)
{
    return(a.val<b.val);
}
bool compare2(struct element a,struct element b)
{
    if(a.count!=b.count)
    {
        return(a.count<b.count);
    }
    else
    return a.index>b.index;
}
void sortbyfrequency(int a[],int n)
{
    struct element ele[n];
    for(int i=0;i<n;i++)
    {
        ele[i].index=i;
        ele[i].val=a[i];
        ele[i].count=0;
    }
    stable_sort(ele,ele+n,compare);
    ele[0].count=1;
    for(int i=1;i<n;i++)
    {
        if(ele[i].val==ele[i-1].val)
        {
            ele[i].count+=ele[i-1].count+1;
            ele[i-1].count=-1;
            ele[i].index=ele[i-1].index;
        }
        else
        {
            ele[i].count=1;
        }
    }
    stable_sort(ele,ele+n,compare2);
    for(int i=n-1,index=0;i>=0;i--)
    {
        if(ele[i].count!=-1)
        {
            for(int j=0;j<ele[i].count;j++)
            {
                a[index++]=ele[i].val;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[]={2,5,2,6,-1,99999,5,8,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    sortbyfrequency(arr,n);
    return 0;
}