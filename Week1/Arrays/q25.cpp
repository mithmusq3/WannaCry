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
    vector<int> arr1 = { 10, 3, 5, 6, 2 };

    int n=arr1.size();
    vector<int> suffix(n,1);
    vector<int> prefix(n,1);
    suffix[n-1]=1;
    prefix[0]=1;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*arr1[i-1];
        suffix[n-i-1]=suffix[n-i]*arr1[n-i];
    }
    vector<int> prod(n,1);
    for(int i=0;i<n;i++){
        prod[i]=prefix[i]*suffix[i];
    }
    printVector(prod);



    return 0;
}