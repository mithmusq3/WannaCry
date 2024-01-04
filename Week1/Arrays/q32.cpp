#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//template for array codes

void printVector(vector <int>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    //no of +ve==-ve
    vector<int> arr1 = {2, -3, -10, 6, -8, 1,69,-420};
    vector<int> temp=arr1;
    int n=arr1.size();
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
//        cout<<"pos-"<<pos<<": neg-"<<neg<<endl;
        if(pos>=n || neg>=n)break;
        if(arr1[i]>=0){
            temp[pos]=arr1[i];
            pos+=2;
        }
        else{
            temp[neg]=arr1[i];
            neg+=2;
        }
    }
    printVector(temp);

    return 0;
}
