#include <bits/stdc++.h>
using namespace std;

//Smallest missing positive number

void missingNumber(int arr[], int n){
    for (int i=0; i<n; i++){
        if (arr[i] <= 0 || arr[i] > n){
            continue;
        }
        else{
            while(arr[i] >=1 && arr[i]<=n && arr[i] != arr[arr[i]-1]){
                swap(arr[i], arr[arr[i]-1]);
            }
        }
    }

    for (int i=0; i<n; i++){
        if (arr[i] != i+1){
            cout << "Missing Number: " << i+1 << endl;
            return;
        }
    }
}

int main(){
    int arr[] = {0, 10, 2, -10, -20};
    int n = size(arr);
    missingNumber(arr, n);
    return 0;
}