//Rotate an array by d elements
#include <bits/stdc++.h> 
using namespace std; 

void rotate(int a[], int n, int d){
    int k = d % n;
    if(k == 0)
        return;
    for(int c = 1; c<=k; c++){
        int last = a[0];
        for(int i = 0; i<n-1; i++)
            a[i] = a[i+1];
        a[n-1] = last;
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
    rotate(a, 7, 2);
    for(int i = 0; i<7; i++){
        cout << a[i] << " ";
    }
    return 0;
}