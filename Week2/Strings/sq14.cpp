#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string str="holaamigo";

    vector<int> v(26,0);
    string ans="";
    string temp="";
    int start=0;
    int maxi=0;
    for(int i=0;i<str.size();i++){
        if(v[str[i]-'a']==1){
            if((i-start)>maxi){
                ans=temp;
                maxi=i-start;
            }
            start=i;
            temp="";
            vector<int> v1(26,0);
            v=v1;
        }
        temp+=str[i];
        if(i==str.size()-1 && (i-start+1)>maxi){
            ans=temp;
            maxi=i-start+1;
        }
        v[str[i]-'a']++;
    }
    cout<<ans<<"-"<<maxi;
    return 0;
}