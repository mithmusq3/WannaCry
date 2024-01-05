#include<iostream>///Union of 2 sored array
#include<bits/stdc++.h>
using namespace std;
void Intersection(int a1[],int a2[],int m,int n)
{
    map<int,pair<int,int>> map;
    for(int i=0;i<m;i++)
    {
        if(map.find(a1[i])!=map.end())
        {
            map[a1[i]].first++;
        }
        else
        {
            map[a1[i]].first=1;
        }

    }
    for(int i=0;i<n;i++)
    {
        if(map.find(a2[i])!=map.end())
        {
            map[a2[i]].second++;
        }
        else
        {
            map[a2[i]].second=1;
        }

    }
     vector<int> intersection_list;
    cout<<"Intersection is"<<"\n";
    for(auto i=map.begin();i!=map.end();i++)
    {
        if(i->second.first!=0 &&i->second.second!=0)
        {
             intersection_list.push_back(i->first);
        }
    }
    for(auto i: intersection_list)
    {
        cout<<i<<" ";
    }
      return ;

}



void  Union(int a1[],int a2[],int m,int n)
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
    for(int i=0;i<n;i++)
    {
        if(map.find(a2[i])!=map.end())
        {
            map[a2[i]]++;
        }
        else
        {
            map[a2[i]]=1;
        }

    }
    vector<int> union_list;
     cout<<"Union is"<<"\n";
    for(auto i=map.begin();i!=map.end();++i)
    {
        union_list.push_back(i->first);
    }
    for(auto i: union_list)
    {
        cout<<i<<" ";
    }
      return ;
}

int main()
{
    int a1[]={1,2,3,3,4,5};
    int a2[]={2,3,4,5,6,7};
    int m=sizeof(a1)/sizeof(a1[0]);
    int n=sizeof(a2)/sizeof(a2[0]);
    Union(a1,a2,m,n);
    cout<<"\n",
    Intersection(a1,a2,m,n);
    
    return 0;
}