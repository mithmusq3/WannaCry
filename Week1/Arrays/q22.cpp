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
    int x=29;
    int n=matrix.size();
    pair<int,int> ans= {-1, -1};
    int row_size=matrix[0].size();
    for(int i=0;i<n;i++){
        if(matrix[i][0]<=x && matrix[i][row_size-1]>=x){
            for(int j=0;j<row_size;j++){
                if(matrix[i][j]==x){
                    ans={i,j};
                    i=n;
                    break;
                }
            }
        }
        else continue;
    }
    cout<<ans.first<<"--"<<ans.second;

    return 0;
}