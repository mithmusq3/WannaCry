#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//template for array codes

void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<vector<int>> matrix = { {10, 20, 30, 40},
                                   {15, 25, 35, 45},
                                   {27, 29, 37, 48},
                                   {32, 33, 39, 50}};
    int n=matrix.size();
    int row_size=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
        printVector(matrix[i]);
        cout<<endl;
    }


    return 0;
}