#include<bits/stdc++.h>
using namespace std;

string removefroms1m1(string s1,string s2)
{
    for(auto x:s2)
    {
        while(s1.find(x)<s1.size())
        {
            int i=s1.find(x);
            s1.erase(i,1);
        }
    }
    return s1;
}

int main()
{
    string s1="geeksforgeeks";
    string s2="mask";
    cout<<"Eliminating elements from 2 present 1: "<<removefroms1m1(s1,s2);
    return 0;
}