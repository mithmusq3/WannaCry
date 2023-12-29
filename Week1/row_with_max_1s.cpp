#include<bits/stdc++.h>
using namespace std;

void rowWithMax1s(vector<vector<int>> mat){
    int m=mat.size();
    int n=mat[0].size();
    int left_most1=n-1;
    int index=0;
    for(int i=0; i<n; i++){
        bool flag=false;
        while(left_most1>=0 && mat[i][left_most1]==1){
            left_most1--;
            flag=true;
        }
        if(flag) index=i;

    }
    if(index==0 && mat[0][m-1]==0) cout<<-1;
    else cout<<index;
    return;
}

int main()
{
    vector<vector<int>>mat = { {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {0, 1, 1, 1},
                    {0, 0, 0, 0}};
  
    cout << "Index of row with maximum 1s is ";
    rowWithMax1s(mat);
  
    return 0;
}