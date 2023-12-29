#include<bits/stdc++.h>
using namespace std;

vector<int> getPerfectSquares(int n){
    vector<int> v;
    for(int i=1; i<=n; i++){
        v.push_back(pow(i, 2));
    }
    return v;
}

int countTriples(int n) {
    vector<int> perfectSq=getPerfectSquares(n);
    int cnt=0;
    for(int a=1; a<=n; a++){
        int asq=pow(a, 2);
        for(int i=0; i<n; i++){
            int csq=perfectSq[i];
            int bsq=abs(csq-asq);
            int b=sqrt(bsq);
            int c=sqrt(csq);

            if(c<a || find(perfectSq.begin(), perfectSq.end(), bsq)==perfectSq.end()) continue;

            cnt++;
        }
    }
    return cnt;
}