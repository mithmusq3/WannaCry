#include <bits/stdc++.h>
using namespace std;

//Check Pair with sum K exist or not

bool checkPair(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int l=0, r=n-1;
    while(l<r){
        if (arr[l] + arr[r] == k)
            return true;
        else if (arr[l] + arr[r] < k)
            l++;
        else
            r--;
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 8, 9, 11, 10, 20, 30};
    int n = size(arr);
    int k = 23;
    cout << checkPair(arr, n, k);
    return 0;
}