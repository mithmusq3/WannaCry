#include <bits/stdc++.h>
using namespace std;

//Two elements whose sum is closest to zero

void minSum(int arr[], int n)
{
    sort(arr, arr + n); //O(nlogn
    int l = 0, r = n - 1;
    int min_sum = INT_MAX;
    int min_l = l, min_r = r;
    while (l < r)
    {
        int sum = arr[l] + arr[r];
        if (abs(sum) < abs(min_sum))
        {
            min_sum = sum;
            min_l = l;
            min_r = r;
        }
        if (sum < 0)
            l++;
        else
            r--;
    }
    cout << arr[min_l] << " " << arr[min_r];
}

int main()
{
    int arr[] = {1, 5, 3, 19, 18, 25};
    int n = size(arr);
    minSum(arr, n);
    return 0;
}