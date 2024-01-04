#include <iostream>
#include <string>
using namespace std;
int main() {
    string str="69420";
    int ans=0;
    for(int i=0;i<str.size();i++){
        int temp= str[i]-'0';
        ans*=10;
        ans+=temp;
    }
    cout<<ans;
    return 0;
}