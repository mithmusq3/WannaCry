//Rearrange positive and negative numbers alternatively
#include <bits/stdc++.h> 
using namespace std; 

void alternate(int a[], int n){
    int j = -1;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            j++;
            swap(a[i], a[j]);
        }
    }
    int pos = j + 1, neg = 0;
    while (pos < n && neg < pos && a[neg] < 0){
        swap(a[neg], a[pos]);
        pos++;
        neg += 2;
    }
}

int main(){
    int a[] = {-2,4,1,-21,3,5,-7,8,-10,9};
    alternate(a, 10);
    for(int i = 0; i<10; i++)
        cout << a[i] << " ";
    return 0;
}