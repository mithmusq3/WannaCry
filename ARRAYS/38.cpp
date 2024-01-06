#include <bits/stdc++.h>
using namespace std;

//Subbarray with given sum

void printArr(int arr[], int l, int r){
    cout << "Subarray: ";
    for (int i=l; i<r; i++){
        cout << arr[i] << " ";
    }
}

void subArraySum(int arr[], int n, int sum){
    int l=0,r=0, curr_sum = 0;
    while(l<n && r<n){
        curr_sum += arr[r];
        if (curr_sum < sum){
            r++;
        }
        else if (curr_sum == sum){
            printArr(arr,l,r+1);
            return;
        }
        else if (curr_sum > sum){
            while (true){
                curr_sum -= arr[l];
                l++;
                if (curr_sum == sum){
                    printArr(arr,l,r+1);
                    return;
                }
                else if (curr_sum < sum){
                    r++;
                    break;
                }
            }
        }
    }
}

int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = size(arr);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}