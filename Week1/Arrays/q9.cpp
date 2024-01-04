#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<"-";
    return;
}

vector<int> pythogoras(vector<int>& nums, int target) {
    vector<int> pythogoras;
    map<int,int> mp;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int a=nums[i]*nums[i];
        int rem=sqrt(target-a);
        if(mp.find(rem)!=mp.end()){
            int b=mp[rem];
            pythogoras.push_back(nums[i]);
            pythogoras.push_back(rem);
            pythogoras.push_back(sqrt(target));

            return pythogoras;
        }
        mp[a]=i;
    }
    return pythogoras;
}
int main(){
    vector<int> arr1 = {1,2,5,7,9,3,4};
    vector<vector<int>> result;
    for (int i=0;i<arr1.size();i++) {
        vector<int> v = pythogoras(arr1, arr1[i]*arr1[i]);
        if(v.size()>0)result.push_back(v);
    }
    if(result.size()>0)printVector(result[0]);

    return 0;
}
