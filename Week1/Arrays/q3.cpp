//Find missing number from array of N-1 numbers in the range 1 to N
#include <bits/stdc++.h>
using namespace std;

int missing(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++)
        sum += arr[i];
    int total = ((n+1)*(n+2))/2;
    return total - sum;
}