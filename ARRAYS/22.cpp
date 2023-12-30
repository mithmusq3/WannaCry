#include <bits/stdc++.h>
using namespace std;

//Product of array without using division operator


void productArray(int arr[], int n){
    int left[n], right[n];
    left[0] = 1;
    right[n-1] = 1;
    for (int i=1; i<n; i++){
        left[i] = left[i-1]*arr[i-1];
    }
    for (int i=n-2; i>=0; i--){
        right[i] = right[i+1]*arr[i+1];
    }
    for (int i=0; i<n; i++){
        arr[i] = left[i]*right[i];
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = size(arr);
    productArray(arr, n);
}