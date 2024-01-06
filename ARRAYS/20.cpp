#include <bits/stdc++.h>
using namespace std;

//Print a given matrix in spiral form

int main(){
    int m,n;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int row=0, column = 0;
    while(row<m && column<n){
        for(int i=column; i<n; i++){
            cout << arr[row][i] << " ";
        }
        row++;
        for(int i=row; i<m; i++){
            cout << arr[i][n-1] << " ";
        }
        n--;
        if (row<m){
            for(int i=n-1; i>=column; i--){
                cout << arr[m-1][i] << " ";
            }
            m--;
        }
        if (column<n){
            for(int i=m-1; i>=row; i--){
                cout << arr[i][column] << " ";
            }
            column++;
        }
    }
}