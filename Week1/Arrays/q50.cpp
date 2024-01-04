#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    vector<int> arr1 ={100, 180, 260, 310, 40, 535, 695};
    int n=arr1.size();
    int prof=0;
    for(int i=1;i<n;i++){
        if(arr1[i]>arr1[i-1]){
            prof+=(arr1[i]-arr1[i-1]);
        }
    }
    cout<<prof;
    return 0;
}