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
    vector<int> v = {1, 1, 1, 1};
    map<int,int>mp;
    int sum=0;
    int maxi=0;
    pair<int,int> pr={-1,-1};
    for(int i=0;i<v.size();i++){
        if(v[i]==0)sum--;
        else sum++;
        if(sum==0){
            if((i+1)>maxi)pr={0,i};
        }
        if(mp.find(sum)==mp.end())mp[sum]=i;
        else{
            if((i-(mp[sum]+1)+1)>maxi)pr={mp[sum]+1,i};
        }




    }
    if(pr.second==-1)cout<<"no subarray found";
    else printVector(v,pr.first,pr.second);


    return 0;
}
