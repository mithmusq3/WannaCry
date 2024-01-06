#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n=height.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    int maxi=height[0];
    for(int i=0; i<n; i++){
        if(height[i]>maxi){
            left[i]=height[i];
            maxi=height[i];
        }
        else left[i]=maxi;
    }
    maxi=height[n-1];
    for(int i=n-1; i>=0; i--){
        if(height[i]>maxi){
            right[i]=height[i];
            maxi=height[i];
        }
        else right[i]=maxi;
    }
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=min(left[i], right[i])-height[i];
    }
    return ans;
}