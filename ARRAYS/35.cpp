#include <bits/stdc++.h>
using namespace std;

//Rotate an array by d elements

void rotate(int a[], int n, int d){
    int b[d];
    for(int i=d; i<n; i++){
        b[i] = a[i];
    }
    for(int i=0; i<d; i++){
        b[i] = a[i];
    }
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = size(arr);
    int d = 2;
    rotate(arr, n, d);
}