#include<bits/stdc++.h>
using namespace std;

int MYatoi(string str,int n)
{   int i=0;
    int a;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]-'0'>9)
        {
            cout<<"Invalid number";
        }
        else
        {
            a=str[i]-'0';
            count=count*10+a;
        }
    }
return count;
}

int main()
{
    string s="12345";
    cout<<"Atoi function in action "<<MYatoi(s,s.size());
    return 0;
}