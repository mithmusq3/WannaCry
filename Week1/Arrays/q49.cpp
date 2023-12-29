//program to Count Inversions
#include <bits/stdc++.h>
using namespace std;

int getInvCount(int arr[], int n){
	int count = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				count++;

	return count;
}

int main(){
	int arr[] = { 1, 20, 6, 4, 5 };
	cout << " Number of inversions are " << getInvCount(arr, 5);
	return 0;
}


