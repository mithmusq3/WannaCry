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
    vector<int> arr1 = {0,1,2,2,1,1,2,0,0,1,0,1,2,0,1};
    int n=arr1.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr1[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1)cout<<"no zeroes";
    else{
        int i=j+1;
        while(i<n){
            if(arr1[i]==0){
                i++;
                continue;
            }
            else{
                swap(arr1[i],arr1[j]);
                j++;
                i++;
            }
        }
    }

    printVector(arr1);
    return 0;
}
