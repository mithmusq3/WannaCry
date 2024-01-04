#include <iostream>
#include <string>
using namespace std;
int main() {
    string str="AABAACAADAABAABA";
    string ptn="AABA";
    for(int i=0;i<str.size();i++){
        int count=0;
        int j=i;
        if(str[i]==ptn[0]){
            count++;
            i++;
            while(count<ptn.size() && str[i]==ptn[count]){
                i++;
                count++;
            }
            if(count==ptn.size()){
                cout<< i-count <<endl;
            }
        }
        i=j;
    }

    return 0;
}