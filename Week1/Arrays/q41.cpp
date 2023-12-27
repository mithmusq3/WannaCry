#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;
int main(){
    vector<int> v={-2, -3, 4, -1, -2, 1, 5, -3};
    int sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum>max_sum){
            max_sum=sum;
        }
        if(sum<0)sum=0;
    }
    cout<<max_sum;
    return 0;
}