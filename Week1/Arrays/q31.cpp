//Move all zeroes to end of array
#include <bits/stdc++.h> 
using namespace std; 

void move0s(int a[], int n){
    int p = 0;
    for(int i = 0; i<n; i++){
        if(a[i] != 0){
            swap(a[i], a[p]);
            p++;
        }
    }
}

int main(){
    int a[] = {2,4,0,21,0,0,7,8,0,9};
    move0s(a, 10);
    for(int i = 0; i<10; i++)
        cout << a[i] << " ";
    return 0;
}