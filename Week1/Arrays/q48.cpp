#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;


int main() {

    vector<int> v = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n=v.size();
    int k=n;
    for(int i=0;i<n;i++){
        v[v[i]%k]+=k;
    }
    int maxi=INT_MIN;
    int ind=-1;
    for(int i=0;i<n;i++){
        if(v[i]>maxi){
            maxi=v[i];
            ind=i;
        }
    }
    cout<<ind;

    return 0;
}