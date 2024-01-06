#include <bits/stdc++.h>
using namespace std;

//sorted subsequence of size 3

void subsequence(int arr[], int n){
    int small = arr[0], large = INT_MAX;
    int min_seq = small;
    int store_min = small;

    for (int i= 1; i<n; i++){
        if (arr[i] == small){
            continue;
        }
        else if (arr[i] < small){
            small = arr[i];
            continue;
        }
        else if (arr[i] < large){
            large = arr[i];
            store_min = small;
        }
        else if (arr[i] > large){
            cout << store_min << " " << large << " " << arr[i] << endl;
            return;
        }
    }
}

int main(){
    int arr[] = {12, 11, 10, 5, 6, 2, 30};
    int n = size(arr);
    subsequence(arr, n);
}