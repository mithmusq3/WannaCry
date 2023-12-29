#include<iostream>//find repeating elements
#include<bits/stdc++.h>
using namespace std;


void find_2(int a[],int n)
{
    map<int,int> map;
    for(int i=0;i<n;i++)
    {
        if(map.find(a[i])==map.end())
        {
            map[a[i]]=1;
        }
        else
        {
            ++map[a[i]];
        }
    }
    for(auto i=map.begin();i!=map.end();i++)
    {
        if(i->second!=1)
        {
            cout<<i->first<< " ";
        }
    }
    return;
}

int main()
{
    int array[]={1,1,2,3,4,2,5};
    int size=sizeof(array)/sizeof(array[0]);
    find_2(array,size);
    cout<<"Repeating elements"<<"\n";
    return 0;
}