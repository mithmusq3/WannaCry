#include <bits/stdc++.h>
using namespace std;

//Move all zeroes to end of array

void moveZeroes(int arr[], int n){
    int l=0, r=n-1;
    while (l<r){
        while (arr[l] != 0 && l<r){
            l++;
        }
        while (arr[r] ==0  && l<r){
            r--;
        }
        if (l<r){
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = size(arr);
    moveZeroes(arr, n);
    return 0;
}