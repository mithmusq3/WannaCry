#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<"-";
    return;
}

bool isPalindrome(vector<int> &arr1){
    int n=arr1.size();
    int l=0;
    int r=n-1;
    while(l<r){
        if(arr1[l]!=arr1[r])return false;
        l++;
        r--;
    }
    return true;
}
void addMiddle(vector<int> &arr1,bool isodd){
    int n=arr1.size();
    if(isodd) {
        int mid = (n - 1) / 2;
        vector<int> temp;
        copy(arr1.begin()+mid, arr1.end(),back_inserter(temp));
        for(int i=0;i<temp.size();i++){
            if(temp[i]<9){
                temp[i]++;
                break;
            }
            else{
                temp[i]=0;
                if(i==n-1){
                    temp.push_back(1);
                }
            }
        }
        vector<int> right=temp;
        reverse(temp.begin(),temp.end());
        temp.insert(temp.end(),right.begin()+1,right.end());
        arr1 = temp;
    }
    else {
        int mid1 = (n) / 2;
        int mid2 = mid1 - 1;
        vector<int> temp;
        copy(arr1.begin()+mid1, arr1.end(),back_inserter(temp));
        for(int i=0;i<temp.size();i++){
            if(temp[i]<9){
                temp[i]++;
                break;
            }
            else{
                temp[i]=0;
                if(i==n-1){
                    temp.push_back(1);
                }
            }
        }
        vector<int> right=temp;
        reverse(temp.begin(),temp.end());
        temp.insert(temp.end(),right.begin(),right.end());
        arr1 = temp;

    }
}
void leftCopyToRight(vector<int> &arr1,bool isodd){
    int n=arr1.size();
    if(isodd) {
        int mid = (n - 1) / 2;
        vector<int> temp;
        copy(arr1.begin(), arr1.begin()+mid+1,back_inserter(temp));
        vector<int> left=temp;
        reverse(temp.begin(),temp.end());
        left.insert(left.end(),temp.begin()+1,temp.end());
        arr1 = temp;
    }

    else {
        int mid1 = (n) / 2;
        int mid2 = mid1 - 1;
        vector<int> temp;
        copy(arr1.begin(), arr1.begin()+mid1,back_inserter(temp));
        vector<int> left=temp;
        reverse(temp.begin(),temp.end());
        left.insert(left.end(),temp.begin(),temp.end());
        arr1 = left;
    }

}
bool isLeftGreater(vector<int> &arr1,bool isodd){
    int n=arr1.size();
    if(isodd){
        int mid=(n-1)/2;
        int l=mid;
        int r=mid;
        while(l>0){
            if(arr1[l]<arr1[r])return false;
            l--;
            r++;
        }
        return true;
    }
    else{
        int mid1=(n)/2;
        int mid2=mid1-1;
        int l=mid2;
        int r=mid1;
        while(l>0){
            if(arr1[l]<arr1[r])return false;
            l--;
            r++;
        }
        return true;
    }

}

int main() {
    vector<int> arr1 = {1, 2, 1,2};
    int n=arr1.size();
    bool isodd;
    if(n%2==0)isodd=false;
    else isodd= true;
    if(isPalindrome(arr1)){
        addMiddle(arr1,isodd);
    }
    else{
        if(isLeftGreater(arr1,isodd)){
            leftCopyToRight(arr1,isodd);
        }
        else{
            leftCopyToRight(arr1,isodd);
            addMiddle(arr1,isodd);
        }
    }
    printVector(arr1);



    return 0;
}
