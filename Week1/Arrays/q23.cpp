// C++ Program to print a matrix spirally
#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int m, int n, int **a){
	int i, k = 0, l = 0;
    while (k < m && l < n) {
		for (i = l; i < n; i++) 
			cout << a[k][i] << " ";
		k++;
        for (i = k; i < m; i++) 
			cout << a[i][n - 1] << " ";
		n--;
        if (k < m) {
			for (i = n - 1; i >= l; i--) 
				cout << a[m - 1][i] << " ";
			m--;
		}
        if (l < n){
			for (i = m - 1; i >= k; i--) 
				cout << a[i][l] << " ";
			l++;
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
    spiralPrint(r,c, matrix);
	return 0;
}


