//Find a triplet that sum to a given value
#include <bits/stdc++.h>
using namespace std;

void tripletSum(int a[], int n, int target){
    sort(a, a+n);
    for(int i = 0; i < n-2; i++){
        int f = i+1, r = n-1;
        while(f < r){
            if(a[i] + a[f] + a[r] == target){
                cout << a[i] << " " << a[f] << " " << a[r] << endl;
                return;
            }
            else if(a[i] + a[f] + a[r] > target)
                r--;
            else
                f++;
        }
        cout << "No triplet present.\n";
    }
}

int main(){
    int a[] = {6,7,1,0,-2,4};
    tripletSum(a,6,2);
    return 0;
}