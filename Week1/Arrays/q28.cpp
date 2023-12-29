//Segregate Even and Odd numbers
#include <bits/stdc++.h> 
using namespace std; 

void evenodd(int a[], int n){
    int e = -1;
    for(int i = 0; i<n;i++){
        if(a[i] % 2 == 0){
            swap(a[e + 1],a[i]);
            e++;
        }
    }
}

int main(){
    int a[] = {11,8,7,0,2,5,6,3};
    evenodd(a, 8);
    for(int i = 0; i<8; i++)
        cout << a[i] << " ";
    return 0;
}