#include<bits/stdc++.h>//diagonal matrix print
using namespace std;
#define r 4
#define c 4

int minu(int a,int b)
{
    return (a<b)?a:b;
}

int min(int a,int b,int d)
{
    return minu(a,minu(b,d));
}
int max(int a, int b) 
{  
    return (a>b) ? a:b; 
} 

void printmatrix(int a[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<setw(5)<<a[i][j];
        }
        cout<<"\n";
    }
}

void diagonalorder(int a[][c])
{
    for(int line=1;line<=r+c-1;line++)
    {
        int start_col=max(0,line-r);
        int count=min((c-start_col),r,line);
        for(int j=0;j<count;j++)
        {
            printf("%5d",a[minu(r,line)-j-1][start_col+j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[r][c]={1,2,3,4,
                 5,6,7,8,
                 9,10,11,12,
                 13,14,15,16};
    cout<<"Matrix given is"<<"\n";
    printmatrix(a);

    diagonalorder(a);
    return 0;
}