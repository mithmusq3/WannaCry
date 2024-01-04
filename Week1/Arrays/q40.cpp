#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<int> arr = {3, 4, 5, 6, 7, 1, 2};
    int d=2;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());

    printVector(arr);

    return 0;
}