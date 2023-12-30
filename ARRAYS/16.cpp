#include <bits/stdc++.h>
using namespace std;

//Minimum difference between any two elements of an array

int max(int arr[], int n)
{
    int max_element = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_element)
            max_element = arr[i];
    }
    return max_element;
}

void radixSort(int arr[], int n)
{
    int max_element = max(arr, n);
    int exp = 1;
    while (max_element / exp > 0)
    {
        int count[10] = {0};
        int output[n];
        for (int i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;
        for (int i = 1; i < 10; i++)
            count[i] += count[i - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        for (int i = 0; i < n; i++)
            arr[i] = output[i];
        exp *= 10;
    }
}

void minDiff(int arr[], int n)
{
    radixSort(arr, n);
    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] < min_diff)
            min_diff = arr[i] - arr[i - 1];
    }
    cout << min_diff;
}

int main()
{
    int arr[] = {1, 5, 3, 19, 18, 25};
    int n = size(arr);
    minDiff(arr, n);
    return 0;
}