#include <iostream>
#include <vector>

using namespace std;
bool bitCheck(int num,int count){
    int c=0;
    for(int i=0;i<count;i++){
        num/=2;
    }
    if(num%2==1)return true;
    return false;

}
int main() {
    vector<int> arr1 = { 2, 3, 7, 9, 11, 2, 3, 11 };
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