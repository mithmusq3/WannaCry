//K smallest elements in an array
#include <bits/stdc++.h>
using namespace std;

void kSmallest(int arr[], int n, int k){
	sort(arr, arr + n);
    for (int i = 0; i < k; i++)
		cout << arr[i] << " ";
}

int main(){
	int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
	int k = 3;
	kSmallest(arr, 7, k);
}


