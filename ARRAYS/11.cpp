#include <bits/stdc++.h>
using namespace std;

//Two repeating elements

int fact(int n){
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}

void twoRepeat(int arr[], int n){
    int sum = 0;
    int product = 1;

    for(int i=0; i<n; i++){
        sum += arr[i];
        product *= arr[i];
    }

    int sumN = (n-2)*(n-1)/2;
    int productN = fact(n-2);

    int sumXY = sum - sumN;
    int productXY = product/productN;

    int x = (sumXY + sqrt(sumXY*sumXY - 4*productXY))/2;
    int y = (sumXY - sqrt(sumXY*sumXY - 4*productXY))/2;

    cout << x << " " << y;
}

int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = size(arr);
    twoRepeat(arr, n);
    return 0;
}