#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<int> ans;
    vector<vector<int>> matrix = { {10, 20, 30, 40},
                                   {10,20,45},
                                   {2,5,10},
                                   {10,3}};

    int n=matrix.size();
    int mini=INT_MAX;
    int mini_ind=INT_MAX;
    for(int i=0;i<n;i++){
        if(matrix[i].size()<mini){
            mini=matrix[i].size();
            mini_ind=i;
        }
        sort(matrix[i].begin(),matrix[i].end());
    }
    for(int i=0;i<mini;i++){
        int ele=matrix[mini_ind][i];
        int count=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<matrix[j].size();k++){
                if(matrix[j][k]>ele) break;
                if(matrix[j][k]==ele){
                    count++;
                    break;
                }
            }
        }
        if(count>=n)ans.push_back(ele);
    }

    printVector(ans);

    return 0;
}
