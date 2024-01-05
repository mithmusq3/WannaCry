#include<iostream>//finding non repeating elements from array of repeating elements
#include<bits/stdc++.h>
using namespace std;

void Double(int a1[],int m)
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

    for( auto i=map.begin();i!=map.end();++i)
    {
        if(i->second==1)
        {
            cout<<i->first<< " ";
        }

    }
    return;
}

int main()
{
    int a[]={1,1,2,2,3,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Repeating elements are";
    Double(a,n);
    return 0;

}