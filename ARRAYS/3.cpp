#include <bits/stdc++.h>
using namespace std;

//Find missing number from N-1 numbers

int main(){
    int arr[] = {1,3,5,2,6,4,8};
    int sum = 0;
    for(int i:arr){
        sum+=i;
    }
    int actual_sum = (size(arr)+1)*(size(arr) + 2)/2;
    cout << "Missing Number: " << actual_sum-sum;
}