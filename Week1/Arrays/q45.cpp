//Largest subarray with equal number of 0s and 1s
#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n){
    unordered_map<int, int> mp;
    int sum = 0; 
    int max_len = 0; 
    int ending_index = -1;
 
    for (int i = 0; i < n; i++) {
        sum = (arr[i] == 1)? (sum + 1):(sum - 1);
        if (sum == 0) {
            max_len = i + 1;
            ending_index = i;
        }
        if (mp.count(sum)) {
            if (i - mp[sum] > max_len){
                max_len = i - mp[sum];
                ending_index = i;
            }
        }
        else 
            mp[sum] = i;
    }
    cout << ending_index - max_len + 1 << " to " << ending_index << endl;
    return max_len;
}
  
int main(){
    int arr[] = { 1, 0, 0, 1, 0, 1, 1 };
    maxLen(arr, 7);
    return 0;
}