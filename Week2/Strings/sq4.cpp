#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverseStr(string& str,int start ,int end){
    reverse(str.begin()+start,str.begin()+end);
}
int main() {
    string str="hola amigo";
    int start=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==' '||i==str.size()-1){
            if(i==str.size()-1)i++;
            reverseStr(str,start,i);
            start=i+1;
        }
    }
    cout<<str;
    return 0;
}
