//Print Matrix Diagonally
#include <bits/stdc++.h>
using namespace std;

void diagonalPrint(int r, int c, int **a){
    int d = 0, s = 0;
    while(s < c){
        int i = d, j = s;
        while(0 <= i && j < c){
            cout << a[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
        (d < r-1)? d++:s++;
    } 
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
    cout << "\nDiagonally printed matrix:\n";
    diagonalPrint(r,c, matrix);
	return 0;
}