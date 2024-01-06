//Find the 3 elements such that a[i] < a[j] < a[k] and i < j < k
#include <bits/stdc++.h>
using namespace std;

void find3(int arr[], int n){
    int min = 0, max = n-1;
    int *smaller = new int[n];
    smaller[0] = -1;
    for(int i = 1; i<n; i++){
        if(arr[i] <= arr[min]){
            min = i;
            smaller[i] = -1;
        }
        else
            smaller[i] = min;
    }
    int *greater = new int[n];
    greater[n-1] = -1;
    for(int i = n-2; i>=0; i--){
        if(arr[i] >= arr[max]){
            max = i;
            greater[i] = -1;
        }
        else
            greater[i] = max;
        cout << greater[i] << " ";
    }
    
    for(int i = 1; i<n-1; i++){
        if(smaller[i] != -1 && greater[i] != -1){
            cout << arr[smaller[i]] << " " << arr[i] << " " << arr[greater[i]] << endl;
            return;
        }
    }
    cout << "Not found!\n";
}

int main(){
    int arr[] = {6,4,8,5,0,7,1};
    find3(arr,7);
    return 0;
}