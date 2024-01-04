#include<bits/stdc++.h>
using namespace std;
void printduplicate(string str)
{
    unordered_map<char,int> map;
    for(int i=0;i<str.length();i++)
    {
        map[str[i]]++;
    }
    for(auto it:map)
    {
        if(it.second>1)
        {
            cout<<it.first<<" ";
        }
    }
    return;
}

int main()
{
    string a="test string";
    printduplicate(a);
    return 0;
}