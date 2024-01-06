//find the next higher permutation of the given number as an array of digits. 
#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreatest(vector<int> nums){
    int n = nums.size();
    if(n == 1)
        return nums;
    if(nums[n-1] > nums[n-2])
        swap(nums[n-1], nums[n-2]);
    else{
        int t = n-1;
        while(t>0 && nums[t-1] >= nums[t])
            t--;
        if(t == 0){
            nums.clear(); //no next higher permutation
        }
        else{
            t--;
            int i = t+1;
            while(i<n-1 && nums[i+1] > nums[t])
                i++;
            swap(nums[t], nums[i]);
            sort(nums.begin()+t+1, nums.end());
        }
    }
    return nums;
}

int main(){
    cout << "Enter a number:";
    int n;
    cin >> n;
    vector<int> num;
    while(n>0){
        num.push_back(n%10);
        n /= 10;
    }
    num = nextGreatest(num);
    if(num.empty())
        cout << -1;
    else{
        for(auto i: num)
            cout << i;
    }
    return 0;
}