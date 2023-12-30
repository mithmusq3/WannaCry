#include <bits/stdc++.h>
using namespace std;

//ThreeSum

vector<int> findPair(int arr[], int n, int k, int l)
{
    int r=n-1;
    vector<int> ans;
    while(l<r){
        if (arr[l] + arr[r] == k){
            ans.push_back(arr[l]), ans.push_back(arr[r]);
            break;
            }
        else if (arr[l] + arr[r] < k)
            l++;
        else
            r--;
    }
    return ans;
}

vector<int> threeSum(int arr[], int n, int k)
{
    vector<int> ans;
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        vector<int> temp = findPair(arr, n, k-arr[i], i+1);
        if(temp.size() == 2){
            ans.push_back(arr[i]);
            ans.push_back(temp[0]);
            ans.push_back(temp[1]);
            break;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {2, 4, 8, 9, 11, 10, 20, 30};
    int n = size(arr);
    int k = 23;
    vector<int> ans = threeSum(arr, n, k);
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
