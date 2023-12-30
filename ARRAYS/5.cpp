#include <bits/stdc++.h>
using namespace std;

//Find two odd occurring elements in an array without using any extra space

void twoOdd(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    ans = ans & ~(ans-1);
    int x=0, y=0;
    for(int i=0; i<n; i++){
        if (arr[i]&ans){
            x = x^arr[i];
        }
        else{
            y = y^arr[i];
        }
    }
    cout << "The odd repeating elements are: " << x << " " << y;
}

int main(){
    int arr[]={1,2,2,2,1,4,4,3,3,3,5,6,5,6};
    int n = size(arr);
    twoOdd(arr,n);

}