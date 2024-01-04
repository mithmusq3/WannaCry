#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}

int main() {
    vector<vector<int>> matrix = { {1,0,0,0,0},
                                   {0,1,1,0,0},
                                   {0,0,0,0,0},
                                   {1,1,1,0,1},
                                   {0,1,1,0,0}};
    int n=matrix.size();
    int row_size=matrix[0].size();
    vector<int> row(n,0);
    vector<int> col(row_size,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<row_size;j++){
            if(matrix[i][j]==1){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for (int j = 0; j < row_size; j++) {
            if(row[i]==1 || col[j]==1){
                matrix[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        printVector(matrix[i]);
        cout<<endl;
    }

    return 0;
}