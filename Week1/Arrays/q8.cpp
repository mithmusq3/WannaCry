//Find pair of numbers with given sum X
#include <bits/stdc++.h>
using namespace std;

bool hasPairSum(int arr[], int n, int target){
    sort(arr, arr+n);
    int f = 0, r = n-1;
    while(f < r){
        if(arr[f] + arr[r] == target)
            return true;
        else if(arr[f] + arr[r] < target)
            f++;
        else
            r--;
    }
    return false;
}

int main(){
    int a[] = {5,-1,0,7,2,-2,3,1};
    cout << hasPairSum(a, 8, 15);
    return 0;
}