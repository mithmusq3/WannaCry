#include<bits/stdc++.h>
using namespace std;


void computelps(char *pat,int m,int *lps)
{
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<m)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }  
    }
}

void kmpsearch(char *txt,char *pat)
{
    int m=strlen(pat);
    int n=strlen(txt);
    int lps[m];
    computelps(pat,m,lps);
    int i=0;
    int j=0;
    while((n-i)>=(m-j))
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<"Found at index "<<i-j<<"\n";
            j=lps[j-1];
        }
        else if(i<n && pat[j]!=txt[i])
        {
            if(j!=0)
            {
                j=lps[j-1];
            }
            else
            i=i+1;
        }

    }


}

int main()
{
    char txt[]="AAACAAAA";
    char pat[]="AAA";
    kmpsearch(txt,pat);
    return 0;
}