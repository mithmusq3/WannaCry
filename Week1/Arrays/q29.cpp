//Segregate 0s and 1s
#include <bits/stdc++.h> 
using namespace std; 

void sort01(int a[], int n){
    int e = -1;
    for(int i = 0; i<n;i++){
        if(a[i] == 0){
            swap(a[e + 1],a[i]);
            e++;
        }
    }
}

int main(){
    int a[] = {0,0,1,1,0,0,0,0};
    sort01(a, 8);
    for(int i = 0; i<8; i++)
        cout << a[i] << " ";
    return 0;
}