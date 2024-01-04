#include<bits/stdc++.h>
using namespace std;


void reversewords(string str)
{
    vector<string> temp;
    string s="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i] ==' ')
        {
            temp.push_back(s);
            s=" ";
        }
        else
        s+=str[i];
    }
    temp.push_back(s);
    for(int i=temp.size()-1;i>=0;i--)
    {
        cout <<temp[i]<<" ";
    }
    return;
}
int main()
{
    string a="Tomorrow is a holiday";
    reversewords(a);
    return 0;
}