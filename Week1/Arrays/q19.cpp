//Find the first subarray which has a zero sum in an array
#include <bits/stdc++.h>
using namespace std;

vector<int> subArray0(int a[], int n){
    vector<int> res;
    unordered_map<int,int> mp;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += a[i];
        if(sum == 0){
            vector<int> res(a, a+i+1);
            return res;
        }
        if(mp.count(sum)){
            int s = mp[sum]+1;
            vector<int> res(a+s,a+i+1);
            return res;
        }
        mp[sum] = i;
    }
    return res;
}

int main(){
    int a[] = {1,5,20,4,5,-4,3};
    vector<int> x = subArray0(a,7);
    for(auto i: x)
        cout << i << " ";
    return 0;
}