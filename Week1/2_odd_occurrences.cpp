#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {

    int XOR=0, x=0, y=0;
    for(auto it: nums) XOR=XOR^it;
    long set_bit = XOR & (-XOR);
    for(auto it: nums){
        if(set_bit & it) x=x^it;
        else y=y^it;
    }
    return {x, y};
    
}