#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void printVector(vector<vector<int>>& vec){
    for(int i=vec.size()-1;i>=0;i--) {
        if(vec[i][0]==0 )break;
        cout << vec[i][1] << ":";
    }
    return;
}
int main() {
    //assuming only positive integers
    vector<int> arr1 = {2,6, 3, 10, 6, 4, 8,4,4,3,3,3,3,3, 1,13,69,69};
    auto max_it=max_element(arr1.begin(),arr1.end());
    int maxi=*max_it;
    vector<vector<int>> hash(maxi,{0,0});
    for(int i=0;i<arr1.size();i++){
        hash[arr1[i]-1][0]=hash[arr1[i] - 1][0] + 1;
//        cout<<hash[arr1[i]-1][0]<<"-";
        hash[arr1[i]-1][1]=arr1[i];
//        cout<<hash[arr1[i]-1][1]<<endl;
    }
    sort(hash.begin(),hash.end());
    printVector(hash);

    return 0;
}