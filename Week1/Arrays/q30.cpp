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
    vector<int> arr1 = {0,1,2,2,1,1,2,0,0,1,0,1,2,0,1};
    int n=arr1.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr1[mid]==0){
            swap(arr1[mid],arr1[low]);
            low++;
            mid++;
        }
        else if(arr1[mid]==1){
            mid++;
        }
        else{
            swap(arr1[mid],arr1[high]);
            high--;
        }
    }
    printVector(arr1);
    return 0;
}
