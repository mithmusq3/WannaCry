#include<bits/stdc++.h>
using namespace std;

const int no_of_chars=256;

string findsubstring(string s,string pattern)
{
    int n1=s.length();
    int n2=pattern.length();

    if(n1<n2)
    {
        cout<<"No string exist no window possible";
        return " ";
    }
    int hash_string[no_of_chars]={0};
    int hash_pattern[no_of_chars]={0};
    for(int i=0;i<n2;i++)
    {
        hash_pattern[pattern[i]]++;
    }
    int start=0;
    int start_index=-1;
    int min_len=INT_MIN;
    int count=0;
    for(int j=0;j<n1;j++)
    {
        hash_string[s[j]]++;
        if(hash_string[s[j]]==hash_pattern[s[j]])
        {
            count++;
        }
        if(count==n2)
        {
            while(hash_string[s[start]]>hash_pattern[s[start]] || hash_pattern[s[start]]==0)
            {
                if(hash_string[s[start]]>hash_pattern[s[start]])
                {
                    hash_string[s[start]]--;
                    start++;
                }
            }
                int len_window=j-start+1;
                if(min_len>len_window)
                {
                    min_len=len_window;
                    start_index=start;
                }
        }
        
        if(start_index==-1)
        {
            cout<<"No window";
            return " ";
        }
    }

return s.substr(start_index,min_len);
}


int main()
{
    string s="this is test string";
    string pattern="tist";
    cout<<"The substring is"<<findsubstring(s,pattern);
    return 0;
}