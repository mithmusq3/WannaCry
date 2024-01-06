#include <bits/stdc++.h>
using namespace std;

//Maximum repeating number in O(n) time and O(1) extra space

void repeat(int arr[], int n, int k){
    for (int i=0; i<n; i++){
        arr[arr[i]%k] +=k;
    }
    int max = INT_MIN;
    int index = -1;
    for (int i=0; i<n; i++){
        if (max<arr[i]) {
            max = arr[i];
            index = i;
        }
    }
    cout << "Maximum repeating element: " << index << endl;
}

int main(){
    int arr[] = {2, 3, 3, 5, 3, 4, 1, 7};
    int n = size(arr);
    int k = 8;
    repeat(arr, n, k);
}