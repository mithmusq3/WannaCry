//Find two numbers such that their difference is minimum
#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[], int n){
    sort(arr, arr + n);
    pair <int,int> p;
    int mind = arr[1] - arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] - arr[i-1] < mind){
            mind = arr[i] - arr[i-1];
            p.first = arr[i];
            p.second = arr[i-1];
        }
    }
    cout << p.first << " " << p.second << endl;
}