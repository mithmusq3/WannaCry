#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<int> arr1 = {1, 60, -10, 79, -80, 82};
    int mini=INT_MAX;
    sort(arr1.begin(),arr1.end());
    int n=arr1.size();
    int l=0;
    int r=n-1;
    vector<int> ans;
    while(r>l){
        if(abs(arr1[l]+arr1[r])<mini){
            mini=abs(arr1[l]+arr1[r]);
            ans={arr1[l],arr1[r]};
            if(mini==0)break;
        }
        if(arr1[l]+arr1[r]<0)l++;
        else r--;
    }
    printVector(ans);
    return 0;
}