#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<"-";
    return;
}

int main(){
    vector<int> arr1 = {1,2,3,4};
    int mini=INT32_MAX;
    vector <int> result;
    for(int i=0;i<arr1.size();i++){
        if(arr1[i]>mini)continue;
        else {
            mini=arr1[i];
            for(int j=i+1;j<arr1.size();j++){
                if(arr1[j]>arr1[i]){
                    for(int k=j+1;k<arr1.size();k++){
                        if(arr1[k]>arr1[j]){
                            result={arr1[i],arr1[j],arr1[k]};
                            i=arr1.size();
                            j=arr1.size();
                            break;
                        }
                    }
                }
            }

        }
    }
    if(result.size()>2)printVector(result);
    return 0;
}
