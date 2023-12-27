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
    int left=0;
    int right=row_size-1;
    int top=0;
    int bottom=n-1;
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++)cout<<matrix[top][i]<<":";
        top++;
        for(int i=top;i<=bottom;i++)cout<<matrix[i][right]<<":";
        right--;
        for(int i=right;i>=left;i--)cout<<matrix[bottom][i]<<":";
        bottom--;
        for(int i=bottom;i>=top;i--)cout<<matrix[i][left]<<":";
        left++;
    }

    return 0;
}

