#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void permutations(string& str,int i){
    if(i==str.size()-1)cout<<str<<endl;
    for(int j=i;j<str.size();j++){
        swap(str[i],str[j]);
        permutations(str,i+1);
        swap(str[i],str[j]);
    }
}
int main() {
    string str="hOlaAmigo";
    permutations(str,0);
    return 0;
}
