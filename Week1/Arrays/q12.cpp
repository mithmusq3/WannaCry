//Find two repeating elements in a given array
#include <bits/stdc++.h>
using namespace std;

void repeating(int arr[], int n){
    int visited[n+1] = {0};
    for(int i = 0; i<n; i++){
        if(visited[arr[i]])
            cout << arr[i];
        else
            visited[arr[i]]++;
    }
}

int main(){
    int a[] = {1,2,3,4,3,5,7,6,7,8};
    repeating(a,10);
    return 0;
}