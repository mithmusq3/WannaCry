//Maximum and minimum of an array using minimum number of comparisons
#include <bits/stdc++.h> 
using namespace std; 

void maxmin(int a[], int n){
    sort(a, a+n);
    cout << "Min = " << a[0] << endl;
    cout << "Max = " << a[n-1] << endl;
}