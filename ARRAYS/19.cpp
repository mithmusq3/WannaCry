#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;

    int row=0, column = 0;
    while(row<m && column<n){
        if (arr[row][column] == target){
            cout << "Target at (" << row << "," << column << ") ";
            break;
        }
        else if (target >= arr[row+1][column] && target >= arr[row][column+1]){
            row++;
            column++;
        }
        else if (target >= arr[row+1][column] && target <= arr[row][column+1]){
            row++;
        }
        else if (target <= arr[row+1][column] && target >= arr[row][column+1]){
            column++;
        }
        else{
            cout << "Target not found";
            break;
        }
    }
}