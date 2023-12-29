#include<bits/stdc++.h>
using namespace std;

int bitonic(vector<int> nums){
    int n= nums.size();
    int j=0;
    int start=0;
    int nextStart=0;
    int maxlen=1;
    while(j<n-1){
        while(j<n-1 && nums[j]<=nums[j+1]) j++;
        while(j<n-1 && nums[j]>=nums[j+1]){
            if(j<n-1 && nums[j]>nums[j+1]) nextStart=j+1;
            j++;
        }
        maxlen=max(maxlen, j-start+1);
        start=nextStart;
    }

    return maxlen;
}
 
int main()
{
    vector<int> nums = {12, 4, 78, 90, 45, 23};

    printf("Length of max length Bitonic "
            "Subarray is %d", bitonic(nums));
    return 0;
}