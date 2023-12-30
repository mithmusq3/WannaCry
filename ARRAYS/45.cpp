#include <bits/stdc++.h>
using namespace std;

//Stock buy and sell

void stockBuySell(int arr[], int n){
    int i = 0;
    while (i<n-1){
        while ((i<n-1) && (arr[i+1]<=arr[i])){
            i++;
        }
        if (i==n-1){
            break;
        }
        int buy = i++;
        while ((i<n) && (arr[i]>=arr[i-1])){
            i++;
        }
        int sell = i-1;
        cout << "Buy on day: " << buy << " Sell on day: " << sell << endl;
    }
}

int main(){
    int arr[] = {100, 180, 260, 310, 40, 535, 695};
    int n = size(arr);
    stockBuySell(arr, n);
}