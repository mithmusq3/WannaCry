#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<"-";
    return;
}
int main() {
    vector<int> arr1 = {2, 3, 7, 6, 8, -1, -10, 15};
    vector<int> arr2(arr1.size(),0);
    for(int i=0;i<arr1.size();i++){
        if(arr1[i]>0)arr2[arr1[i]-1]=arr1[i];
    }
    for(int i=0;i<arr2.size();i++) {
        if(arr2[i]!=i+1){
            cout<<i+1;
            break;
        }
    }

    return 0;
}