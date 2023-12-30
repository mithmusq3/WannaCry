#include <bits/stdc++.h>
using namespace std;

//Maximum difference between two elements such that larger element appears after the smaller number

void maxDiff(int arr[], int n)
{
    int max_diff = arr[1] - arr[0];
    int min_element = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - min_element > max_diff)
            max_diff = arr[i] - min_element;
        if (arr[i] < min_element)
            min_element = arr[i];
    }
    cout << max_diff;
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = size(arr);
    maxDiff(arr, n);
    return 0;
}