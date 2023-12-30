#include <bits/stdc++.h>
using namespace std;

//Segregate Odd and even numbers

void segregateOddEven(int arr[], int n){
    int l=0, r=n-1;
    while (l<r){
        while (arr[l]%2 == 0 && l<r){
            l++;
        }
        while (arr[r]%2 != 0 && l<r){
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
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int n = size(arr);
    segregateOddEven(arr, n);
    return 0;
}