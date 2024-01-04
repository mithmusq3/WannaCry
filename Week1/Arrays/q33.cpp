#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//template for array codes

void printVector(vector <string>& vec){
    for(int i=0;i<vec.size();i++) cout<<vec[i]<<":";
    return;
}
int main() {
    vector<string> arr1 = {"a","1","b","2","c","3","d","4","f","69","k","420"};
    int n=arr1.size();
    vector<string> arr(n,"");
    int num=n/2;
    int alp=0;
    for(int i=0;i<n;i++){
        if(i%2==0) {
            arr[alp]=arr1[i];
            alp++;
        }
        else {
            arr[num]=arr1[i];
            num++;
        }
    }
    printVector(arr1);
    cout<<endl;
    printVector(arr);




    return 0;
}
