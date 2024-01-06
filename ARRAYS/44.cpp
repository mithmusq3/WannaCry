#include <bits/stdc++.h>
using namespace std;

//Print K largest elements in an array

void kLargest(int arr[], int n, int k){
    sort(arr, arr+n);
    for(int i=n-1; i>=n-k; i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 23, 12, 9, 30, 2, 50};
    int n = size(arr);
    int k = 3;
    kLargest(arr, n, k);
    return 0;
}