#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    string str="this is a test string";
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
    string ptn="tist";
    unordered_map<char,int> mp;
    for(int i=0;i<ptn.size();i++){
        mp[ptn[i]]++;
    }
    unordered_map<char,int> temp;
    unordered_map<char,int> t;
    pair<int,int> p;
    int i=0;
    for(;i<str.size();i++){
        if(mp.find(str[i])!=mp.end()){
            t[str[i]]++;
            if(temp[str[i]] < mp[str[i]]){
                temp[str[i]]++;
            }
        }
        if(temp==mp)break;
    }
    p.first=0;
    p.second=i;
    int l=0;
    int r=i;
    int mini=r-l+1;
    while(r<str.size()){
        while(mp.find(str[l])==mp.end()){
            l++;
        }
        t[str[l]]--;
        if(t[str[l]]<mp[str[l]]){
            r++;
            while(str[r]!=str[l]){
                if(mp.find(str[r])!=mp.end()){
                    t[str[r]]++;
                }
                r++;
            }
            t[str[r]]++;
        }
        l++;
        if(r-l+1 < mini){
            mini= r-l+1;
            p.first=l;
            p.second=r;
        }
    }
    cout<<"start - "<<p.first<<": end - "<<p.second<<endl;
    for(int i=p.first;i<=p.second;i++){
        cout<<str[i];
    }
    return 0;
}
