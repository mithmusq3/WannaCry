#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <map>
#include <stack>
using namespace std;

int pivotind(vector<int>&v,int low,int high){
    int pivot=v[low];
    int l=low;
    int r=high;
    while(l <= r){
        while ( l<=high &&  v[l] <= pivot) l++;
        while (r>low && v[r] > pivot) r--;
        if (l <= r) {
            swap(v[l], v[r]);
            l++;
            r--;
        }

    }
    swap(v[r],v[low]);
    return r;
}

void quickSo(vector<int>&v,int low,int high,int k) {
    if (low <= high) {

        int pivotIndex = pivotind(v, low, high);
        if (pivotIndex == k - 1) {
            cout << v[pivotIndex];

        }
        if (pivotIndex > k - 1){
            quickSo(v, low, pivotIndex - 1, k);
        }
        else{
            quickSo(v, pivotIndex + 1, high, k);
        }
    }
}

int main(){
    vector<int> v = {2, 5, 1, 9, 3, 7, -1, -69};
    int k = 6;

    quickSo(v, 0, v.size() - 1, k);

    return 0;
}
