#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int main(){
    vector<int>v={4, 78, 90, 45, 23};
    int maxi=1;
    int count=1;
    int flag=0;
    //0-increasing expected,1-decreasing expected
    for(int i=1;i<v.size();i++){

        if(flag==0){
            count++;
            if(v[i]<v[i-1]){
                flag=1;
            }
        }
        else if(flag==1){
            if(v[i]<=v[i-1]){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=1;
                count++;
                flag=0;
            }
        }
        maxi=max(maxi,count);
    }
    cout<<maxi;

    return 0;

}