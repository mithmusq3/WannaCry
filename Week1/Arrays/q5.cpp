#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
bool bitCheck(int num,int count){
    int denom= pow(2.0,count);
    num/=denom;
    if(num%2==1)return true;
    return false;
}
int main() {
    vector<int> arr1 = {12, 23, 34, 12, 12, 23, 12, 45};
    int y=0;
    for(int i=0;i<arr1.size();i++)y^=arr1[i];

    int num1=0;
    int num2=0;
    int xorval=y;
    int count=0;
    while(y>0){
        if(y%2!=0)break;
        else {
            y/=2;
            count++;
        }
    }
    for(int i=0;i<arr1.size();i++){
        if(bitCheck(arr1[i],count)){
            num1^=arr1[i];
        }
    }
    num2=num1^xorval;
    cout<<"count -- "<<count<<endl;
    cout<<"y val -- "<<y<<endl;
    cout<<"xor value -- "<<xorval<<endl;
    cout<<"1st missing number -- "<<num1<<endl;
    cout<<"2nd missing number -- "<<num2<<endl;

    return 0;
}
