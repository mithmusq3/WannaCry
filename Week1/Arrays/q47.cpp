#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;


int main() {

    vector<int> v = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int count=1;
    int ele=v[0];
    for(int i=1;i<v.size();i++){
        if(ele==v[i])count++;
        else{
            count--;
            if(count<0){
                ele=v[i];
                count=1;
            }
        }
    }
    count=0;
    for(int i=0;i<v.size();i++){
        if(ele==v[i])count++;
    }
    if(count>(v.size()/2))cout<<ele;
    else cout<<"no majority ele";


    return 0;
}