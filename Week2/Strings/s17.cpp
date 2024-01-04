#include <iostream>
#include <string>
using namespace std;

bool check(string s1, string s2) {
    if (s1.empty()) return s1.empty();
    bool x = !s1.empty() && (s1[0] == s2[0] || s2[0] == '.');
    if (s2.size() >= 2 && s2[1] == '*') return check(s1, s2.substr(2)) || (x && check(s1.substr(1), s2));
    else return x && check(s1.substr(1), s2.substr(1));
}
int main() {
    string str1="ab*c.";
    string str2="abbbbcy";
    bool ans=check(str2,str1);
    cout<<ans;
    return 0;
}