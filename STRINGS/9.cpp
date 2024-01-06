#include <bits/stdc++.h>
using namespace std;

//write atoi function

int atoi(string s){
    int res = 0;
    int i=0;
    int sign = 1;
    int n = s.length();
    while(s[i] == ' '){
        i++;
    }
    while(s[n-1] == ' '){
        n--;
    }
    if (s[i] == '-'){
        i++;
        sign = -1;
    }
    for(; i<n; i++){
        if (res > INT_MAX/10 || (res == INT_MAX/10 && s[i] - '0' > INT_MAX%10)){
            if (sign == 1){
                return INT_MAX;
            }
            else{
                return INT_MIN;
            }
        }
        if (s[i] < '0' || s[i] > '9'){
            cout << "Invalid input" << endl;
            return -1;
        }
        res = res*10 + (s[i]-'0');
    }
    return res*sign;
}

int main(){
    string s = "  -123   ";
    cout << atoi(s) << endl;
    return 0;
}