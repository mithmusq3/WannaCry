#include<bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int m, int n){
    if(i>=0 && i<m && j>=0 && j<n) return true;
    return false;
}

void printDiag(vector<vector<int>> mat){
    int m=mat.size();
    int n=mat[0].size();

    for(int k=0; k<m; k++){
        cout<<mat[k][0]<<" ";
        int i=k-1;
        int j=1;
        while(isValid(i, j, m, n)){
            cout<<mat[i][j]<<" ";
            i--;
            j++;
        }
        cout<<endl;
    }

    for(int k=1; k<n; k++){
        cout<<mat[n-1][k]<<" ";
        int i=n-2;
        int j=k+1;
        while(isValid(i, j, m, n)){
            cout<<mat[i][j]<<" ";
            i--;
            j++;
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> mat={ 
        { 1, 2, 3, 4 },      
        { 5, 6, 7, 8 }, 
        { 9, 10, 11, 12 },   
        { 13, 14, 15, 16 }, 
        { 17, 18, 19, 20 }, 
    }; 
    printDiag(mat);
}