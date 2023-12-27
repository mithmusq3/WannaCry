#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
void printVector(vector <int>& vec,int start,int end){
    for(int i=start;i<end+1;i++) cout<<vec[i]<<":";
}
int main() {
    vector<int> arr1 = {-2, -3, 5, 4, 8, 1,5,-4};
    int start=0;
    int end=0;
    map<int,int> mp;
    int sum=0;
    for(int i=0;i<arr1.size();i++){
        sum+=arr1[i];
        int rem=0+sum;
        if(rem==0){
            if(arr1[i]==0)start=end=i;
            else{
                start=0;
                end=i;
            }

            break;
        }
        if(mp.find(rem)==mp.end()){
            mp[sum]=i;
        }
        else{
            start=mp[rem]+1;
            end=i;
            break;
        }
    }
    printVector(arr1,start,end);
    return 0;
}
