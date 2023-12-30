#include <bits/stdc++.h>
using namespace std;

//Alternate positive and negative numbers

void alternatePosNeg(int arr[], int n){
    int l=0, r=n-1;
    while (l<r){
        while (arr[l]<0 && l<r){
            l++;
        }
        while (arr[r]>0 && l<r){
            r--;
        }
        if (l<r){
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
    int k=0;
    while (k<n && l<n){
        swap(arr[k], arr[l]);
        k+=2;
        l++;
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = size(arr);
    alternatePosNeg(arr, n);
    return 0;
}