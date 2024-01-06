//Find the Number Occurring Odd Number of Times
#include <bits/stdc++.h>
using namespace std;

int oddOccurence(int arr[], int n){
    //n = size of array
    unordered_map<int,int> mp;
    for(int i = 0; i<n; i++)
        mp[arr[i]]++;
    for(auto i: mp){
        if(i.second % 2 != 0)
            return i.first;
    }
    return -1;
}
int main(){
    int a[] = {1,2,1,2,3,3,3};
    cout << oddOccurence(a,7);
    return 0;
}