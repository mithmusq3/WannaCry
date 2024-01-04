#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//template for array codes

void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) {
        if(vec[i]==0)continue;
        cout << vec[i] << ":";
    }
    return;
}
int main() {
    vector<vector<int> >matrix = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {0, 0, 0, 0}};
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        printVector(matrix[i]);
        cout<<endl;
    }
    return 0;
}