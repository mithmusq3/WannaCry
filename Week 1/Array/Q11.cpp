#include<iostream>//find 4 elements
#include<bits/stdc++.h>
using namespace std;



void find_quad(int a[],int num,int x)
{
    unordered_map<int,pair<int,int>>map;
    for(int i=0;i<num-1;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            map[a[i]+a[j]]={i,j};
        }
    }
    for(int i=0;i<num-1;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            int sum=a[i]+a[j];
            if(map.find(x-sum)!=map.end())
            {
                pair<int,int> p=map[x-sum];
                if(p.first!=i && p.first!=j && p.second!=i && p.second!=j)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[p.first]<<" "<<a[p.second];
                    return;
                }
            }
        }
    }
return;
}

int main()
{
    int  array[]={10,20,30,40,11,12,15};
    int size=sizeof(array)/sizeof(array[0]);
    int x=91;
    find_quad(array,size,x);
    return 0;
}