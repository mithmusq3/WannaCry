#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;


int main(){
    vector<int> arr1 = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n=arr1.size();
    int ans = 0;
    for (int i=1; i<n-1; i++) {

        int l = arr1[i];
        for (int j = 0; j < i; j++)l = max(l, arr1[j]);

        int r=arr1[i];
        for (int j=i+1;j<n;j++)r=max(r,arr1[j]);

        ans=ans+(min(l,r)-arr1[i]);
    }
    cout << ans;
    return 0;
}
