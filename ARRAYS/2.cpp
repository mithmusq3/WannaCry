#include <bits/stdc++.h>
using namespace std;

//Finding the number occuring odd numbewr of times

int main(){
    int arr[] = {1,2,1,4,2,5,3,4,5,5,3};
    int ans = 0;
    for (int i=0; i<size(arr); i++){
        ans = ans^arr[i];
    }
    cout << "ELEMENT: " << ans;
}