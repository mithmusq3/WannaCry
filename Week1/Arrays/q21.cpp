#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int arrSum(vector <int>& vec,int start,int end){
    int sum=0;
    for(int i=start;i<end;i++) sum+=vec[i];
    return sum;
}
int main() {
    vector<int> arr1 = {2, 3, 4, 1, 4, 5};
    int n =arr1.size();
    int mid=n/2;
    int leftSum= arrSum(arr1,0,mid);
    int rightSum = arrSum(arr1,mid+1,n);
    int ans=-1;
    if(leftSum<rightSum){
        while(mid<(n-1)){
            leftSum+=arr1[mid];
            rightSum-=arr1[mid+1];
            mid++;
            if(leftSum>rightSum)break;
            else if(leftSum==rightSum){
                ans=mid;
                break;
            }
        }
    }
    else if(leftSum>rightSum){
        while(mid>0){
            leftSum-=arr1[mid-1];
            rightSum+=arr1[mid];
            mid--;
            if(leftSum<rightSum)break;
            else if(leftSum==rightSum){
                ans=mid;
                break;
            }
        }
    }
    else{
        ans=mid;

    }
    cout<<"index -- "<<ans<<endl;
    if(ans>=0)cout<<"value -- "<<arr1[ans];

    return 0;
}
