#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;
int main(){
    vector<int> v={6, -3, -10, 0, 2};
    int l_prod=1;
    int r_prod=1;
    int max_l_prod=INT_MIN;
    int max_r_prod=INT_MIN;
    for(int i=0;i<v.size();i++){
        l_prod*=v[i];
        if(l_prod>max_l_prod){
            max_l_prod=l_prod;
        }
        r_prod*=v[v.size()-1-i];
        if(r_prod>max_r_prod){
            max_r_prod=r_prod;
        }
        if(l_prod==0)l_prod=1;
        if(r_prod==0)r_prod=1;
    }
    cout<<max(max_l_prod,max_r_prod);
    return 0;
}