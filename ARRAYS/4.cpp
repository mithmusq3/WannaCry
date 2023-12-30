#include <bits/stdc++.h>
using namespace std;

//Unique Numbers 2

int main(){
    int  arr[] = {1,2,3,4,5,1,2,3,4,6};
    set<int> s;
    for(int i: arr){
        auto it = s.find(i);
        if(it!=s.end()){
            s.erase(it);
        }
        else{
            s.insert(i);
        }
    }
    cout << "Unique Numbers: " << *s.begin() << " " << *next(s.begin(),1);
}