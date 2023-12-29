#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mpp;
    vector<int> ans;
    for(auto it:nums1){
        if(!mpp[it]) mpp[it]=1;
    }
    for(auto it:nums2){
        if(mpp[it]){
            ans.push_back(it);
            mpp[it]--;
        }
    }
    return ans;
}

vector<int> Union(vector<int>& nums1, vector<int>& nums2){
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i=0;
    int j=0;
    vector<int> ans;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i]<=nums2[j]){
            if(ans.empty() || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(ans.empty() || ans.back()!=nums2[j]){
                ans.push_back(nums2[j]);
            }
            j++;
        }
    }
    while(i < nums1.size()){
        if(ans.empty() || ans.back()!=nums1[i]){
            ans.push_back(nums1[i]);
        }
        i++;
    }
    while(j < nums2.size()){
        if(ans.empty() || ans.back()!=nums2[j]){
            ans.push_back(nums2[j]);
        }
        j++;
    }
    return ans;
}

int main(){
    vector<int> nums1={1, 1, 2, 3, 4, 5};
    vector<int> nums2={2, 3, 4, 4, 5, 6};

    vector<int> ans1=Union(nums1, nums2);
    for(auto it: ans1) cout<<it<<" ";
    cout<<endl;

    vector<int>ans2=intersection(nums1, nums2);
    for(auto it: ans2) cout<<it<<" ";
}