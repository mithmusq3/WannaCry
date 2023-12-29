//Find the two non-repeating elements in an array of repeating elements
#include <bits/stdc++.h>
using namespace std;

vector<int> getNonRepeating(int arr[], int n){
    sort(arr, arr+n);
    vector<int> ans;
    for(int i = 0; i< n-2; i += 2){
        if(arr[i] != arr[i+1]){
            ans.push_back(arr[i]);
            i--;
        }
    }
    if(ans.size() == 1)
        ans.push_back(arr[n-1]);
    return ans;
}