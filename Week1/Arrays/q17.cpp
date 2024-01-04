#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> arr1 = {2, 3, 10, 6, 4, 8, 1};
    int lowest=arr1[0];
    int highest=arr1[0];

    for(int i=1;i<arr1.size();i++){
        if(arr1[i]<lowest){
            lowest=arr1[i];
        }
        if(arr1[i]>highest){
            highest=arr1[i];
        }
    }
    cout<< lowest-highest;
    cout<< lowest;
    cout<< highest;

    return 0;
}