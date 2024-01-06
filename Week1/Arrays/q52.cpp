//Print the elements greater than all the elements to its right
#include <bits/stdc++.h> 
using namespace std; 

vector<int> leaders(int a[], int n){
    vector<int> res;
    int m = a[n-1];
    res.push_back(m);
    for(int i = n-2; i>=0; i--){
        if(a[i] > m){
            m = a[i];
            res.push_back(m);
        }
    }
    return res;
}

int main(){
    int a[] = {18, 17, 9, 7, 5, 2, 1};
    vector<int> x = leaders(a,7);
    for(auto i: x){
        cout << i << " ";
    }
    return 0;
}