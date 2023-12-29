//Sort an array of 0s, 1s and 2s
#include <bits/stdc++.h> 
using namespace std; 

void sort012(int a[], int n){
    int lo = 0, mid = 0, hi = n-1;
     while (mid <= hi) {
        switch(a[mid]){
            case 0: swap(a[lo++], a[mid++]);
            break;
            case 1: mid++;
            break;
            case 2: swap(a[mid], a[hi--]);
            break;
        }
    }
}

int main(){
    int a[] = {0,2,1,2,2,0,0,1,1,0};
    sort012(a, 10);
    for(int i = 0; i<10; i++)
        cout << a[i] << " ";
    return 0;
}