//Find the row with maximum number of 1s in a 2D row-wise sorted matrix
#include <bits/stdc++.h>
using namespace std;

int max1(int r, int c, int **A){
    for(int j = 0; j<c; j++){
        for(int i = 0; i<r; i++){
            if(A[i][j] == 1)
                return i;
        }
    }
}

int main(){
    cout << "Enter the number of rows and columns:";
    int r,c;
    cin >> r >> c;
    cout << "Enter the elements of matrix:";
    int **matrix = new int*[r];
    for(int i = 0;i<r;i++){
        matrix[i] = new int[c];
        for(int j=0;j<c;j++){
            cin >> matrix[i][j];
        }
    }
    cout << "Row with most 1's = " << max1(r,c,matrix) << endl;
    return 0;
}