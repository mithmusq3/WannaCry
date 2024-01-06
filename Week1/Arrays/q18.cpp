//Find two elements whose sum is closest to zero
#include <bits/stdc++.h>
using namespace std;

void closest0(int a[], int n){
    int mindiff = abs(a[0]+a[1]);
    int x,y;
    sort(a, a+n);
    int f = 0, r = n-1;
    while(f < r){
        if(a[f] + a[r] == 0){
            cout << a[f] << " " << a[r];
            return;
        }
        if(mindiff > abs(a[f] + a[r])){
            x = a[f]; y = a[r];
            mindiff = abs(a[f] + a[r]);
        }
        (a[f] + a[r] > 0) ? r--:f++;
    }
    cout << x << " " << y;
}

int main(){
    int a[] = {-3,5,2,-2,1,7,-4};
    closest0(a,7);
    return 0;
}