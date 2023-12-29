//Find a,b,c such that a^2+b^2=c^2
#include <bits/stdc++.h>
using namespace std;

bool isTriplet(int a, int b, int c){
    int x = a*a, y = b*b, z = c*c;
    return (z == x + y);
}

vector<int> triplet(int a[], int n){
    vector<int> res;
    sort(a, a + n);
    for(int i = n-1; i>=2; i--){
        int f = 0, r = i-1;
        while(f < r){
            if(isTriplet(a[f], a[r], a[i]))
                return {a[f], a[r], a[i]};
            (a[f]*a[f] + a[r]*a[r] > a[i]*a[i])? r-- : f++;
        }
    }
    return res;
}

int main(){
    int a[] = {13, 1, 5, 12, 4};
    vector<int> x = triplet(a,5);
    for(auto i: x)
        cout << i << " ";
    return 0;
}