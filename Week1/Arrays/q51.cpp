#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;


int main() {

    vector<int> v = {16, 17, 4, 3, 5, 2};
    int n=v.size();
    int maxi=v[n-1];

    for(int i=n-1;i>=0;i--){
        if(v[i]>=maxi){
            cout<<i<<"-"<<v[i]<<endl;
            maxi=v[i];
        }
    }
    return 0;
}