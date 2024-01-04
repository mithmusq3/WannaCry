#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void check ( string& str, int l, int n ){
    int j;
    char c;
    for (int i=1;i<n;i*=3){
        j=i;
        c=str[j+l];
        do{
            if (j&1) j=(((n/2)+(j/2)));
            else j/=2;
            swap(str[j+l],c);
        }
        while(j!=i);
    }
}

int main()
{
    string str = "a1b2c3d4e5f6g7h8i9j1k2l3m4";
    int k,l1;
    int l2=str.size();
    int i=0;
    while(l2)
    {
        k=0;
        while(pow(3,k)+1<=l2)k++;
        l1=pow( 3, k - 1 ) + 1;
        l2-=l1;
        check(str,i,l1);
        reverse(str.begin()+i/2,str.begin()+i);
        reverse(str.begin()+i,str.begin()+i+l1/2);
        reverse(str.begin()+i/2,str.begin()+i+l1/2);
        i+=l1;
    }
    cout<<str;
    return 0;
}


