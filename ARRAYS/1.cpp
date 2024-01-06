#include <bits/stdc++.h>
using namespace std;

//Union and Intersection of two sorted arrays

void UnionIntersection(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    vector<int> v1;
    vector<int> v2;
    while(i<n && j<m){
        if (arr1[i] < arr2[j]){
            v1.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i]  < arr2[j]){
            v1.push_back(arr2[j]);
            j++;
        }
        else {
            v1.push_back(arr1[i]);
            v2.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while (i<n){
        v1.push_back(arr1[i]);
        i++;
    }
    while (j<m){
        v1.push_back(arr2[j]);
        j++;
    }
    cout << "UNION: ";
    for(auto it=v1.begin(); it!=v1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << "INTERSECTION: ";
    for (auto it=v2.begin(); it!=v2.end(); it++){
        cout << *it << " ";
    }
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,5,12,16,20};
    int n=size(arr1);
    int m = size(arr2);
    UnionIntersection(arr1, arr2, n, m);
}
