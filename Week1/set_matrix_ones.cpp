#include<bits/stdc++.h>
using namespace std;

void setOnes(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    bool flag1=false, flag2=false;
    for(int i=0;i<n;i++){
        if(matrix[i][0]==1) flag1=true;
    }
    for(int j=0;j<m;j++){
        if(matrix[0][j]==1) flag2=true;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]==1) matrix[i][0]=matrix[0][j]=1;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0]==1 || matrix[0][j]==1) matrix[i][j]=1;
        }
    }
    if(flag1){
        for(int i=0;i<n;i++) matrix[i][0]=1;
    }
    if(flag2){
        for(int j=0;j<m;j++) matrix[0][j]=1;
    }

    for(auto i:matrix){
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }
}

int main() {
  vector < vector < int >> arr;
  arr = 
  {{1, 0, 2, 1}, 
  {3, 4, 5, 2}, 
  {0, 3, 0, 5}};
  setOnes(arr);
}