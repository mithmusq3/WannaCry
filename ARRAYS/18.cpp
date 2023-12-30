#include <bits/stdc++.h>
using namespace std;

//Finding duplicates in an array in O(n) time and O(1) extra space

void duplicate(int arr[], int n){
    for (int i=0; i<n; i++){
        if (arr[i]!= arr[arr[i]]){
            while(arr[i] != arr[arr[i]]){
                swap(arr[i],arr[arr[i]]);
            }
        }
    }
    for (int i=0; i<n; i++){
        if (arr[i] != i){
            cout << arr[i] << " ";
        }
    }
    
}

int main(){
    int arr[]={ 0, 4, 3, 2, 7, 8, 2, 3, 1 };
    int n = size(arr);
    duplicate(arr,n);
}