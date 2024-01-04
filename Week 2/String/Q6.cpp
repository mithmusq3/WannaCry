#include<bits/stdc++.h>
using namespace std;

void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}

void reverse(char *str,int low,int high)
{
    while(low<high)
    {
        swap(&str[low++],&str[high--]);
    }
}

void cycleleader(char *str,int shift,int length)
{
    int j;
    char item;
    for(int i=1;i<length-1;i*=3)
    {
        j=i;
        item=str[shift+j];
        do
        {
            if(j&1)
            {
                j=length/2+j/2;
            }
            else
            {
                j/=2;
            }
            swap(&str[j+shift],&item);

        } while (j!=i);    
    }
}

void splitnumbers(char * str)
{
    int k;
    int lenrem=strlen(str);
    int lenfirst;
    int shift=0;
    while(lenrem)
    {
        k=0;
        while(pow(3,k)+1<=lenrem)
        {
            k++;
        }
        lenfirst=pow(3,k-1)+1;
        lenrem-=lenfirst;
        cycleleader(str,shift,lenfirst);
        reverse(str,shift/2,shift-1);
        reverse(str,shift,shift+lenfirst/2-1);
        reverse(str,shift/2,shift+lenfirst/2-1);
        shift+=lenfirst;
    }
}

int main()
{
    char str[]="a1b2c3d4e5f6";
    splitnumbers(str);
    cout<<str;
    return 0;
}