#include <bits/stdc++.h>
using namespace std;

//Shuffle array using Fisher-Yates algorithm

void shuffleArray(int arr[], int n){
    srand(time(NULL));
    for (int i=n-1; i>0; i--){
        int j = rand()%(i+1);
        swap(arr[i], arr[j]);
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = size(arr);
    shuffleArray(arr, n);
}