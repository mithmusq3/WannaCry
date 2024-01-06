#include <bits/stdc++.h>   
using namespace std;

//largest sum contiguous subarray

void largetSum(int arr[], int n){                                //Kadane's Algorithm
    int max_so_far = INT_MIN, max_ending_here = 0, l=-1, r=-1;
    int flag = 0;
    for(int i=0; i<n; i++){
        max_ending_here += arr[i];
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
            if (l==-1 || flag) {
                l=i;
                r=i;
                flag = 0;
            }
            else{
                r=i;
            }
        if(max_ending_here < 0){
            max_ending_here = 0;
            flag =1;
        }
            
    }
    cout << max_so_far << endl;
    cout << l << " " << r << endl;
}

void printLargest(int arr[], int n){
    int l=0, r=0, sum=0, max_sum = 0;
    while (l<n && arr[l]<0)
        l++;
    if (l==n){
        cout << "Max Sum: " << *max_element(arr,arr+n) << endl;
        return;
    }
    r=l;
    sum = arr[l];
    max_sum = sum;
    int i=l+1;
    while(i<n){
        sum+=arr[i];
        if (sum > max_sum){
            max_sum = sum;
            r = i;
        }
        i++;
    }
    cout << "Maximum sum is " << max_sum << endl;
    cout << "Subarray: ";
    for(int i=l; i<=r; i++)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = size(arr);
    largetSum(arr, n);
    printLargest(arr, n);
    return 0;
}