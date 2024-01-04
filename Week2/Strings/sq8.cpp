#include <iostream>
#include <string>
using namespace std;
int main() {
    string str="wwwwaaadexxxxxxywww";
    string ans="";
    int start=0;
    for(int i=0;i<str.size();i++ ){
        if(i==0){
            cout<<str[i];
            continue;
        }
        if(str[i]!=str[i-1]||i==str.size()-1){
            int x= i-start;
            if(i==str.size()-1)x++;
            cout<<x;
            if(!(str[i]==str[i-1]&&i==str.size()-1)) {
                cout<<str[i];
            }
            start=i;
        }

    }
    cout<<ans;
    return 0;
}