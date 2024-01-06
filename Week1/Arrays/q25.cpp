//Construct Product Array without division operator: each element = product of elements in arr[] except arr[i]
#include <bits/stdc++.h> 
using namespace std; 

void productArray(int arr[], int n){ 
    if (n == 1) { 
		cout << 0; 
		return; 
	} 
	int* left = new int[n]; 
	int* right = new int[n]; 
    int* prod = new int[n]; 
    int i, j; 
    left[0] = 1; 
    right[n - 1] = 1; 
    for (i = 1; i < n; i++) 
		left[i] = arr[i - 1] * left[i - 1]; 
    for (j = n - 2; j >= 0; j--) 
		right[j] = arr[j + 1] * right[j + 1]; 
    for (i = 0; i < n; i++) 
		prod[i] = left[i] * right[i]; 
    for (i = 0; i < n; i++) 
		cout << prod[i] << " "; 
    return; 
} 


int main(){ 
	int arr[] = { 10, 3, 5, 6, 2 }; 
	cout << "The product array is: \n"; 
	productArray(arr, 5); 
} 


