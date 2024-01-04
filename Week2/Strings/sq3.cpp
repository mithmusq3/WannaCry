#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string str="holaamigoho";
    vector<int> v(26,0);
    for(int i=0;i<str.size();i++){
        v[str[i]-'a']++;
    }
    for(int i=0;i<str.size();i++){
        if(v[str[i]-'a']==1){
            cout<<str[i];
            break;
        };
    }

    return 0;


}
