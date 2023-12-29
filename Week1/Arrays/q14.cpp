//Find the least positive number missing in an unsorted array.
#include <bits/stdc++.h>
using namespace std;

int missing(int a[], int n){
    bool present[n+1] = {false};
    for(int i = 0; i<n; i++){
        if(a[i] > 0 && a[i] < n)
            present[a[i]] = true;
    }
    for(int i = 1; i <= n; i++){
        if(!present[i])
            return i;
    }
    return n+1;
}