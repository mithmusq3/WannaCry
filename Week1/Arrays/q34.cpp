#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//template for array codes

void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<int> arr1 = {2, 3, 10, 6, 4, 8, 1,7,-1,69};
    int n=arr1.size();
    int mini,maxi;
    int start=0;

    if(n%2==0){
        if(arr1[0]>arr1[1]){
            mini=arr1[1];
            maxi=arr1[0];
        }
        else{
            mini=arr1[0];
            maxi=arr1[1];
        }
        start+=2;
    }
    else{
        mini=arr1[0];
        maxi=arr1[0];
        start++;
    }
    for(int i=start;i<n;i=i+2){
        if(arr1[i]>arr1[i+1]){
            if(arr1[i]>maxi)maxi=arr1[i];
            if(arr1[i+1]<mini)mini=arr1[i+1];
        }
        else{
            if(arr1[i]<mini)mini=arr1[i];
            if(arr1[i+1]>maxi)maxi=arr1[i+1];
        }
    }
    cout<<"highest -- "<<maxi<<":: lowest -- "<<mini;

    return 0;
}