#include <bits/stdc++.h>
using namespace std;

//4sum

void findPair(int arr[], int n, int k)
{
    unordered_map<int, pair<int, int>> m;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            m[arr[i]+arr[j]] = {i, j};
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int sum = arr[i] + arr[j];
            
            if (m.find(k - sum) != m.end()){
                pair<int, int> p = m[k - sum];
                if (p.first != i && p.first != j && p.second != i && p.second != j){
                    cout << arr[i] << " " << arr[j] << " " << arr[p.first] << " " << arr[p.second];
                    return;
                }
            }
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 1, 2};
    int n = size(arr);
    int k = 91;
    findPair(arr, n, k);
    return 0;
}