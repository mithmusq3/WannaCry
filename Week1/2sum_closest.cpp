#include<bits/stdc++.h>
using namespace std;

bool compare(int x, int y){
    return abs(x)<abs(y);
}

void Two_sum_closest(vector<int> arr){
    sort(arr.begin(), arr.end(), compare);
    int mini=INT_MAX;
    int x, y;
    for(int i=1; i<arr.size(); i++){
        if(abs(arr[i]-arr[i-1])<=mini){
            mini=abs(arr[i]-arr[i-1]);
            x=i;
            y=i-1;
        }
    }
    cout<<"The two numbers are "<<x<<" "<<y;
}