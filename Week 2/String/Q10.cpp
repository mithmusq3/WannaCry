#include<bits/stdc++.h>
using namespace std;

void nonrepeating(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str.find(str[i],str.find(str[i])+1)==string :: npos)
        {
            cout<<"First non repeating character is "<<str[i];
            return;
        }
    }
    cout<<"I get printed if all characters are repeating\n";
    return;
}

int main()
{
    string a="geekforgeeks";
    if(a.size()==0)
    cout<<"Empty string ";
    else
    nonrepeating(a);
    return 0;
}
