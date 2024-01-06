#include <bits/stdc++.h>
using namespace std;

//Largest subarray with equal 0's and 1's

void subArray01(int arr[], int n){
    unordered_map<int, int> map;
    int sum = 0, max_len = 0, end_index = -1;

    for(int i=0; i<n; i++){
        arr[i] = (arr[i] == 0) ? -1 : 1;
    }

    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0){
            max_len = i+1;
            end_index = i;
        }
        if(map.find(sum+n) != map.end()){
            if(max_len < i - map[sum+n]){
                max_len = i - map[sum+n];
                end_index = i;
            }
        }
        else{
            map[sum+n] = i;
        }
    }

    for(int i=0; i<n; i++){
        arr[i] = (arr[i] == -1) ? 0 : 1;
    }

    cout << end_index - max_len + 1 << " to " << end_index << endl;

}

int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 1};
    int n = size(arr);
    subArray01(arr, n);
    return 0;
}