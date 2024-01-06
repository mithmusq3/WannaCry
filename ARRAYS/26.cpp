#include <bits/stdc++.h>
using namespace std;

//Segregate 0's and 1's

void segregate01(int arr[], int n){
    int l=0, r=n-1;
    while (l<r){
        while (arr[l] == 0 && l<r){
            l++;
        }
        while (arr[r] == 1 && l<r){
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
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = size(arr);
    segregate01(arr, n);
    return 0;
}