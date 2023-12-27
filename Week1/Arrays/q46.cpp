#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;


int main() {
    vector<int> v = {3, 2, 7, 10};
    int in=v[0];
    int ex=0;
    for(int i=1;i<v.size();i++){
        int temp=max(in,ex);
        in=ex+v[i];
        ex=temp;
    }
    cout<<max(in,ex);
    return 0;
}