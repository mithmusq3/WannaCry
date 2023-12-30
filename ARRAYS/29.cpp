#include <bits/stdc++.h>
using namespace std;

//Maximum and minimum of an array using minimum number of comparisons

void maxMin(int arr[], int n){
    int max = arr[0], min = arr[0];
    for (int i=1; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

int main(){
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int n = size(arr);
    maxMin(arr, n);
    return 0;
}