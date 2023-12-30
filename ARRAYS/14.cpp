#include <bits/stdc++.h>
using namespace std;

//row with max 1s

int main(){
    int m,n;
    cin >> m >> n;
    int arr[m][n];
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int row = 0;
    int col = n-1;
    int max_row_index = 0;

    while(row < m && col >= 0){
        if (arr[row][col] == 1){
            max_row_index = row;
            col--;
        }
        else{
            row++;
        }
    }

    cout << "Max 1s in row: " << max_row_index+1 << endl;
    return 0;
}