#include<bits/stdc++.h>//works for repeated characters and both upper and loweer case letters
using namespace std;
int fact(int n)
{
    return (n<=1)?1:n*fact(n-1);
}

int find_rank(string str)
{   int rank=1;
    int n=str.size();
    int i;
    for(i=0;i<n;i++)
    {
        int count=0;
        int repeat=1;
        for(int j=i+1;j<n;j++)
        {
            if(str[j]<str[i])
            {
                count++;
            }
        }
        vector<int> frequency(52,0);
        for(int j=i;j<n;j++)
        {
            if(str[j]>='A' && str[j]<='Z')
            {
                frequency[str[j]-'A']+=1;
            }
            else
            {
                frequency[str[j]-'a'+26]+=1;
            }
        }
        int fre_count=1;
        for(auto x:frequency)
        {
            fre_count*=fact(x);
        }
        rank+=count*fact(n-i-1)/fre_count;
    }
    return rank;
}
int main()
{
    string str="settLe";
    cout<<"The lexicographic rank of the given permutation is "<<find_rank(str)<<endl;
    return 0;
}