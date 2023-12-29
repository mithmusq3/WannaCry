//Find Maximum difference between two elements such that the larger element appears after the smaller element in array
#include <bits/stdc++.h>
using namespace std;

int maxDiff(int a[], int n){
    int minelem =a[0];
    int maxd = a[1] - a[0];
    for(int i = 1; i<n; i++){
        maxd = max(a[i] - minelem, maxd);
        minelem = min(a[i], minelem);
    }
    return maxd;
}

int main(){
    int a[] = {0,2,3,5,7,11,4};
    cout << maxDiff(a, 7) << endl;
    return 0;
}