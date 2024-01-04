#include <iostream>
#include <string>
using namespace std;


int fact(int n) {
    if(n <= 1) return 1;
    return n * fact(n - 1);
}

int func(string str,int l,int h)
{
    int temp = 0;
    for (int i = l + 1; i <= h; ++i)
        if (str[i]<str[l])temp++;
    return temp;
}

int main()
{
    string str = "string";
    int n = str.size();
    int m = fact(n);
    int ans = 1;
    int temp;
    int i;
    for (i = 0; i < n; i++) {
        m /= n - i;
        temp = func(str, i, n - 1);
        ans += temp * m;
    }

    cout << ans;
    return 0;
}