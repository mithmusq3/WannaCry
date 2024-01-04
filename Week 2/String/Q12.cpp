#include<bits/stdc++.h>//method1 using sorting and method 2 using hashmap
using namespace std;

bool isanagram(string s1,string s2)
{
    int n1=s1.size();
    int n2=s2.length();

    if(n1!=n2)
    return 0;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<n1;i++)
    {
        if(s1[i]!=s2[i])
        return 0;
    }
    return 1;
}

bool anagram(string s1,string s2)
{
    int n1=s1.size();
    int n2=s2.size();
    if(n1!=n2)
    {
        return 0;
    }
    unordered_map<char,int> map;
    for(int i=0;i<n1;i++)
    {
        map[s1[i]]++;
    }
    for(int i=0;i<n1;i++)
    {
        if(map.find(s2[i])!=map.end())
        {
            map[s2[i]]--;
        }
        else
        {
            return 0;
        }
    }
    for(auto x:map)
    {
        if(x.second!=0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s1="listen";
    string s2="silent";
    if(isanagram(s1,s2))
    {
        cout<<"Anagram method1";
    }
    else
    {
        cout<<"Not anagram method1";
    }
    cout<<"\n Using hashmap \n";
    if (anagram(s1,s2))
    {
        cout<<"Anagram method2";
    }
    else
    {
        cout<<"Not anagram method2";
    }
    return 0;
}
