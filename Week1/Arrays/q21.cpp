//Find points in an array where left-sum==right-sum
#include <bits/stdc++.h>
using namespace std;

vector<int> leftEqualsRight(int a[], int n){
    vector<int> res;
    int total = 0, sum = 0;
    for(int i = 0; i<n; i++)
        total += a[i];
    for(int i = 1; i<n-1; i++){
        sum = (i == 1)? a[0] + a[i] : sum + a[i] ;
        int r = total - sum;
        int l = sum - a[i];
        if(l == r)
            res.push_back(a[i]);
    }
    return res;
}

int main(){
    int a[] = {2,3,4,1,5,4};
    vector<int> x = leftEqualsRight(a,6);
    for(auto i: x)
        cout << i << " ";
    return 0;
}