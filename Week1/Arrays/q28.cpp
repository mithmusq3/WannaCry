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
    vector<int> arr1 = {2, 3, 10, 6, 4, 8, 1,69,420};
    int n=arr1.size();
    int ind=0;
    for(int i=0;i<n;i++){
        if(arr1[i]%2==0){
            swap(arr1[i],arr1[ind]);
            ind++;
        }
    }
    printVector(arr1);

    return 0;
}
