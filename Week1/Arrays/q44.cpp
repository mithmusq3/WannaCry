#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;
void printVector(vector<int>& vec,int start,int end){
    for(int i=start;i<end+1;i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<int> v = {4, 3, 2, 1, 9, 8, 7, 6};
    int target=12;
    map<int,int>mp;
    int sum=0;
    pair<int,int> pr={-1,-1};
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        mp[sum]=i;
        if(sum==target){
            pr={0,i};
            break;
        }
        int rem=sum-target;
        if(mp.find(rem)!=mp.end()){
            pr={mp[rem]+1,i};
            break;
        }

    }
    if(pr.second==-1)cout<<"no subarray found";
    else printVector(v,pr.first,pr.second);


    return 0;
}