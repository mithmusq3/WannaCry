#include <bits/stdc++.h>
using namespace std;

//Frequency of Number greater than N/2 with Moore's Voting Algorithm

void frequency(int arr[], int n){
    int count = 1, max = 0, index = 0;
    for(int i=1; i<n; i++){
        if(arr[index] == arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            index = i;
            count = 1;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] == arr[index]){
            max++;
        }
    }
    if(max > n/2){
        cout << arr[index];
    }
    else{
        cout << "No such element";
    }
}

int main(){
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = size(arr);
    frequency(arr, n);
}