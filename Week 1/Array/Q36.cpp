#include<bits/stdc++.h>//90 degree turn
using namespace std;
#define r 3
#define c 4

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void rotateR(int a[r][c])
{ int b[c][r];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    for(int k=0;k<c;k++)
    {
    for(int i=0,j=r-1;i<j;i++,j--)
    {
        swap(&b[k][i],&b[k][j]);
    }
    }
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return;
}


int main()
{
    int mat[r][c]={0,1,2,0,
                   3,4,5,2,
                   1,3,1,5};
    rotateR(mat);
    return 0;
}