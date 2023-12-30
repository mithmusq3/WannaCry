#include <bits/stdc++.h>
using namespace std;

//Leaders in an array

void leaders(int arr[], int n){
    int leader = arr[n-1];
    cout << leader << " ";
    for (int i=n-2; i>=0; i--){
        if (arr[i]>leader){
            leader = arr[i];
            cout << leader << " ";
        }
    }
}

int main(){
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    int n = size(arr);
    leaders(arr, n);
}