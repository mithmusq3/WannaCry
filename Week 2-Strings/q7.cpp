//find lexicographic rank of a string
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 1)
        return 1;
    return n * fact(n-1);
}

int findSmallRight(string x, int i){
    int r = 0;
    for(int j = i+1; j < x.length(); j++){
        if(x[j] < x[i])
            r++;
    }
    return r;
}

int findRank(string x){
    int len = x.length();
    int mul = fact(len);
    int rank = 1;
    for(int i = 0; i < len; i++){
        mul /= len-i;
        rank += mul * findSmallRight(x, i);
    }
    return rank;
}

int main(){
    cout << "Rank = " << findRank("slab") << endl;
    return 0;
}