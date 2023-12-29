//Find Union and Intersection of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

vector<int> unionArr(int arr1[], int arr2[], int n, int m){
    //n and m are the lengths of the arrays
    set<int> s;
    for(int i = 0; i < n; i++) 
        s.insert(arr1[i]);
    for(int i = 0; i < m; i++)
        s.insert(arr2[i]);
    vector<int> vec(s.begin(), s.end());
    return vec;
}

vector<int> intersectionArr(int arr1[], int arr2[], int n, int m){
    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(arr1[i]);
    vector<int> res;
    for (int i = 0; i < m; i++){
        if (st.count(arr2[i])){
            res.push_back(arr2[i]);
            st.erase(arr2[i]);
        }
    }
    return res;
}