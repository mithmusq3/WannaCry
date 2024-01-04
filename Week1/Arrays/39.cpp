#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int main() {
    vector<vector<int>> matrix = { {10, 20, 30, 40},
                                   {15, 25, 35, 45},
                                   {27, 29, 37, 48},
                                   {32, 33, 39, 50}};
    int n=matrix.size();
    int row_size=matrix[0].size();
    for(int i=0;i<n;i++){
        int a=i;
        int b=0;
        while(a>=0){
            cout<<matrix[a][b]<<"-";
            a--;
            b++;
        }
    }
    for(int i=1;i<row_size;i++){
        int a=n-1;
        int b=i;
        while(a>=i){
            cout<<matrix[a][b]<<"-";
            a--;
            b++;
        }

    }

    return 0;
}