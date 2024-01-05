#include<iostream>//numbers with odd occurances in unsorted array and prints nothing if no such element present
#include<bits/stdc++.h>
using namespace std;

void Odd(int a1[],int m)
{
    map<int,int> map;
    for(int i=0;i<m;i++)
    {
        if(map.find(a1[i])!=map.end())
        {
            map[a1[i]]++;
        }
        else
        {
            map[a1[i]]=1;
        }

    }
    for(auto i=map.begin();i!=map.end();++i)
    {
        if((i->second)%2!=0)
        {
            cout<<i->first<<" ";
        }
    }
    return;
}

int main()
{
    int array[]={1,2,2,1,3,4,1};
    int size=sizeof(array)/sizeof(array[0]);
    Odd(array,size);
    return 0;
}