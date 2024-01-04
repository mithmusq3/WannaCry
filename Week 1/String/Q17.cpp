#include<bits/stdc++.h>//regular expression
using namespace std;

void regexp(string s,string p)
{
int n1=s.size();
int n2=p.size();
int i=0;
int j=0;
while(i<n1)
{
    if(p[j+1]=='*')
    {
       while(p[j]==s[i])
       {
        i++;
       }
       j+=2;
    }
    else if(p[j+1]=='?')
    {
        int count=0;
        while(s[i]==p[j])
        {
            count++;
            i++;
        }
        j+=2;
        if(count!=0 && count!=1)
        {
            cout<<"Invalid1";
            return;
        }
    }
    else
    {
        int count=0;
        while(s[i]==p[j])
        {
            count++;
            i++;
        }
        j++;
        if( count!=1)
        {
            cout<<"Invalid2";
            return;
        }
    }
}
cout<<"Valid";
return;

}

int main()
{
    string s1="aaaabcc";
    string s2="a*b?c";
    regexp(s1,s2);
    return 0;
}