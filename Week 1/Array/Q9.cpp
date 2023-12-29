#include<iostream>         //find a,b,c such that a^2+b^2=c^2
#include<bits/stdc++.h>
void find_pairs(int num)
{
int c;
for(int i=1;i<num-1;i++)
{
    for(int j=i+1;j<num;j++)
    {
        int h=i*i+j*j;
        int g=sqrt(h);
        if(g*g==h && g<=num)
        {
            printf("a=%d,b=%d,c=%d\n",i,j,g);
        }
    }
}
return;
}

int main()
{
    int num=10;
    find_pairs(num);
}