//Turn an image by 90 degrees
#include <bits/stdc++.h> 
using namespace std; 

int** rotate(int n, int m, int **a){
    int **mat = new int*[m];
    for(int i = 0;i<m;i++)
        mat[i] = new int[n];
    for(int i = 0;i<n;i++)
        for(int j=0;j<m;j++)
            mat[j][n-i-1] = a[i][j];
    return mat;
}

int main(){
	cout << "Enter the number of rows and columns:";
    int r,c;
    cin >> r >> c;
    cout << "Enter the elements of matrix:\n";
    int **matrix = new int*[r];
    for(int i = 0;i<r;i++){
        matrix[i] = new int[c];
        for(int j=0;j<c;j++){
            cin >> matrix[i][j];
        }
    }
    matrix = rotate(r,c, matrix);
    cout << "\nRotated matrix:\n";
    for(int i = 0;i<c;i++){
        for(int j=0;j<r;j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    cout << endl;    
    return 0;
}