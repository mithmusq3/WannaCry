#include<bits/stdc++.h>
using namespace std;

string removeChars(string a, string b){
    int n=a.length();
    vector<int> v(26, 0);
    for(auto it:b) v[it-'a']=1;
    int curr=0;
    for(int i=0; i<a.length(); i++){
        if(v[a[i]-'a']!=1){
            a[curr]=a[i];
            curr++;
        }
    }
    // cout<<curr<<endl;
    // cout<<"a="<<a<<endl;
    // a.erase(a.begin()+6);
    // a.erase(a.begin()+6);
    for(int i=0; i<n-curr; i++){
        a.erase(a.begin()+curr);
    }
    return a;
}

int main(){
    string a="computer";
    string b="cat";
    cout<<removeChars(a, b);
}


