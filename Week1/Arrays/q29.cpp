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
    vector<int> arr1 = {0,1,1,1,0,0,1,0,1,0,1,0,0,0,1,1,0};
    int n=arr1.size();
    int ind=0;
    for(int i=0;i<n;i++){
        if(arr1[i]==0){
            swap(arr1[i],arr1[ind]);
            ind++;
        }
    }
    printVector(arr1);

    return 0;
}
