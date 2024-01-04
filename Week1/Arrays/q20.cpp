#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;


void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<int> arr1 = {2, 3,3,4, 10, 6, 4, 8, 1};
    //can also use visited array , but more space and O(n+max_ele)
    //set , yee collision might happen and make it O(n^2) but usually O(n) , so yee im taking some risk
    unordered_set<int> st;
    vector<int> ans;
    for(int i=0;i<arr1.size();i++){
        if(st.find(arr1[i])!=st.end()){
            ans.push_back(arr1[i]);
        }
        else{
            st.insert(arr1[i]);
        }
    }
    printVector(ans);

    return 0;
}
