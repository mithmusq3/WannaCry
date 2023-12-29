//Find the two numbers with odd occurrences in an unsorted array
#include <bits/stdc++.h>
using namespace std;

void oddOccurence(int arr[], int n){
    //n = size of array
    unordered_map<int,int> mp;
    for(int i = 0; i<n; i++)
        mp[arr[i]]++;
    for(auto i: mp){
        if(i.second % 2 != 0)
            cout << i.first << " ";
    }
}