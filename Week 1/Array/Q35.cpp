#include<bits/stdc++.h>//set matrix cells to 1 in corresponding row and column
using namespace std;
#define r 3
#define c 4

void SetMatrix1(int a[r][c])
{
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
           if(a[i][j]==1)
           {
            for(int k=0;k<r;k++)
            {if(a[k][j]!=1)
                {a[k][j]=-1;}
            }
            for(int k=0;k<c;k++)
            {if(a[i][k]!=1)
                {a[i][k]=-1;}
            }
             a[i][j]=1;
           }
          
        }

    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == -1)
                a[i][j] = 1;
        }
    }
}
 

int main()
{
    int mat[3][4]={0,1,2,0,
                   3,4,5,2,
                   1,3,1,5};
    SetMatrix1(mat);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}