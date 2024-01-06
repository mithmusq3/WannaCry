//Given binary 2D Matrix, for all cells as 1, set corresponding row and column as 1
#include <bits/stdc++.h> 
using namespace std; 

void setOnes(vector<vector<int>>& matrix) {
    int col0 = 0, rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 1) col0 = 1;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 1) {
                matrix[i][0] = 1;
                matrix[0][j] = 1;
            }
        }
    }
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--) {
            if(matrix[i][0] == 1 || matrix[0][j] == 1) 
                matrix[i][j] = 1;
        }
        if (col0 == 1) 
            matrix[i][0] = 1;
    }
}
 
int main() {
    vector<vector<int>> arr;
    arr = {{1, 0, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 0}};
    setOnes(arr);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}


