//Search a number in a row wise and column wise sorted 2D matrix
#include <bits/stdc++.h>
using namespace std;

int search(int **A, int r, int c, int x){
    if(x < A[0][0] || x > A[r-1][c-1])
        return -1;
    int i = 0, j = c-1;
    while(i < r && j >= 0){
        if(x == A[i][j]){
            cout << x << " found at " << i << "," << j << endl;
            return 1;
        }
        else if(x > A[i][j])
            i++;
        else    
            j--;
    }
}

int main(){
    cout << "Enter the number of rows and columns:";
    int r,c,x;
    cin >> r >> c;
    cout << "Enter the element to be searched:";
    cin >> x;
    cout << "Enter the elements of matrix:";
    int **matrix = new int*[r];
    for(int i = 0;i<r;i++){
        matrix[i] = new int[c];
        for(int j=0;j<c;j++){
            cin >> matrix[i][j];
        }
    }
    if(search(matrix, r,c,x) == -1)
        cout << "Not found!\n";
    return 0;
}