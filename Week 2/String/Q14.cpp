#include<bits/stdc++.h>
using namespace std;

bool distinct(string s,int i,int j)
{
    vector<bool> visited(256,0);
    for(int k=i;k<=j;k++)
    {
        if(visited[s[k]]!=0)
        {
             return 0;
        }
        visited[s[k]]=1;
    }
    return 1;
}

int sublength(string s)
{
    int n=s.size();
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(distinct(s,i,j))
            {
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}

int sublength1(string s)
{
    if(s.length()==0)
    return 0;

    if(s.length()==1)
    return 1;

    int maxlength=0;
    bool visited[256]={0};

    int left=0,right=0;
    while(right<s.length())
    {
        if(visited[s[right]]==1)
        {
            while(visited[s[right]]==1)
            {
                visited[s[left]]=0;
                left++;
            }
        }
        visited[s[right]]=1;
        maxlength=max(maxlength,right-left+1);
        right++;
    }
    return maxlength;
}
int main()
{
    string str="geeksforgeeks";
    cout<<"The length of longest non repeating subsequence in method 1 is "<<sublength(str);
    cout<<"The length of longest non repeating subsequence in method 2 is "<<sublength1(str);
    return 0;
}