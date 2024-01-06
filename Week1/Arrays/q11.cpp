//Find four elements that sum to a given value
#include <bits/stdc++.h>
using namespace std;

void fourSum(int a[], int n, int target){
    unordered_map<int, pair<int,int>> mp;
    for(int i = 0; i< n-1; i++)
        for(int j = i+1; j<n; j++)
            mp[a[i] + a[j]] = {i,j};

    for(int i = 0; i< n-1; i++){
        for(int j = i+1; j<n; j++){
            int sum = a[i] + a[j];
            if(mp.count(target - sum)){
                pair<int,int> p = mp[target - sum];
                if(p.first != i && p.first != j
                && p.second != i && p.second != j){
                    cout << a[i] << " " << a[j] << " "
                    << a[p.first] << " " << a[p.second] << endl;
                    return;
                }
            }
        }
    }
    cout << "Not found!\n";
}

int main(){
    int a[] = {6,7,1,0,-2,4};
    fourSum(a,6,30);
    return 0;
}