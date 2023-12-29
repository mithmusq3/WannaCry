 
#include<bits/stdc++.h>//row with maximum 1's
using namespace std;
#define r 4
#define c 4

int rowwithmax(bool a[][c])
{
    int j=c-1;
    int max_row_index=0;
    for(int i=0;i<r;i++)
    {
        bool flag=false;
        while(j>=0 && a[i][j]==1)
        {
            j--;
            flag=true;
        }
        if(flag==true)
        {
            max_row_index=i;
        }
    }
    if(max_row_index==0 && a[0][c-1]==0)
    {
        return -1;
    }
    return max_row_index;
}

int main()
{
    bool a[r][c]={0,0,0,1,
                0,1,1,1,
                1,1,1,1,
                0,0,0,0};
    cout<<"Row with maximum 1s "<<rowwithmax(a);//return -1 if it is null amtrix
    return 0;
    
}
