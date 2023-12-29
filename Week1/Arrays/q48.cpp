// C++ program to find the maximum repeating number
#include<iostream>
using namespace std;

int maxRepeating(int* arr, int n, int k){
	for (int i = 0; i< n; i++)
		arr[arr[i]%k] += k;
    int max = arr[0], result = 0;
	for (int i = 1; i < n; i++){
		if (arr[i] > max){
			max = arr[i];
			result = i;
		}
	}
    return result;
}


int main(){
	int arr[] = {2, 3, 3, 5, 3, 4, 1, 7};
	cout << "The maximum repeating number is " <<
		maxRepeating(arr, 8, 8) << endl;
    return 0;
}
