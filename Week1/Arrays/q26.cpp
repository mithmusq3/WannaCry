// Program to shuffle a given array 
#include<bits/stdc++.h> 
#include <stdlib.h> 
#include <time.h> 
using namespace std; 

void randomize (int arr[], int n) { 
	srand (time(NULL)); 
    for (int i = n - 1; i > 0; i--) { 
		int j = rand() % (i + 1); 
        swap(arr[i], arr[j]); 
	} 
} 

int main() { 
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
	randomize (arr, 8); 
	for (int i = 0; i < 8; i++) 
		cout << arr[i] << " "; 
	cout << "\n";
    return 0; 
} 


