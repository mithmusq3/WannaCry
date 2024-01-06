#include <bits/stdc++.h>
using namespace std;

//Recursively remove adjacent duplicates

void adjacent(string& s){
    int i=1;
    while(i<s.length()){
        if (s[i]== s[i-1]){
            int l = i-1;
            while (i<s.length() && s[i] == s[l]){
                i++;
            }
            int r = i;
            s.erase(s.begin()+l, s.begin()+r);
            adjacent(s);
            return;
        }
        i++;
    }
    
    return;
    
}

int main(){
    string s;
    cout << "Enter : ";
    cin >> s;
    adjacent(s);
    cout << s << endl;

}