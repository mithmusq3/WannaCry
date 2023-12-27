#include <iostream>
#include <vector>

using namespace std;

void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<"-";
    return;
}

int main(){
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={5,6,7,8,9};
    vector<int> uni;
    vector<int> inte;
//extra space used only to give output , not for calculations
    int m=arr1.size();
    int n=arr2.size();
    int l=0;
    int r=0;

    //O(max(m,n)) - total time complexity
    while(l<m && r<n){
        if(arr1[l]<arr2[r]){
            uni.push_back(arr1[l]);
            int t=l+1;
            while(arr1[t]==arr1[l]){
                t++;
            }
            l=t;
        }
        else if(arr1[l]>arr2[r]){
            uni.push_back(arr2[r]);
            int t=r+1;
            while(arr2[t]==arr2[r]){
                t++;
            }
            r=t;
        }
        else{
            uni.push_back(arr1[l]);
            inte.push_back(arr1[l]);
            int t=r+1;
            while(arr2[t]==arr2[r]){
                t++;
            }
            r=t;
            t=l+1;
            while(arr1[t]==arr1[l]){
                t++;
            }
            l=t;
        }
    }


    while(l<m){
        uni.push_back(arr1[l]);
        int t=l+1;
        while(arr1[t]==arr1[l]){
            t++;
        }
        l=t;
    }
    while(r<n){
        uni.push_back(arr2[r]);
        int t=r+1;
        while(arr2[t]==arr2[r]){
            t++;
        }
        r=t;
    }

    cout<<"intersection :"<<endl;
    printVector(inte);
    cout<<endl;
    cout<<"Union :"<<endl;
    printVector(uni);





    return 0;
}

