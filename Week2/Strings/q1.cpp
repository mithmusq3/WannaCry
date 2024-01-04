#include <iostream>
#include <string>
using namespace std;
void printStr(string& str,int ind ){
    if(ind==str.size())return;
    printStr(str,ind+1);
    cout<<str[ind];

}
int main() {
    string str="hola amigo";
    printStr(str,0);
    return 0;
}

