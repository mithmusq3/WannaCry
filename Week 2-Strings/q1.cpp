//print a string in reverse using recursion
#include<bits/stdc++.h>
using namespace std;

void printReverse(string x, int i){
    if(i == x.length())
        return;
    printReverse(x, i+1);
    cout << x[i];
}

int main(){
    cout << "Enter a string:";
    string x;
    cin >> x;
    cout << "Reversed string:\n";
    printReverse(x,0);
    return 0;
}
