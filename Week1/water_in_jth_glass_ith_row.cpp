#include<bits/stdc++.h>
using namespace std;

float calcWater(int i, int j, float X){
    vector<float> glass((i*(i+1))/2, 0);
    int ind=0;
    glass[ind]=X;

    for(int row=1; row<=i; row++){
        for(int col=1; col<=row; col++, ind++){
            X= glass[ind];
            glass[ind]=(X>1.0f)?1:X;
            X=(X>1.0f)?X-1:0;
            glass[ind+row]+=X/2;
            glass[ind+row+1]+=X/2;
        }
    }
    return glass[(i*(i-1))/2 + j -1];
}

int main(){
    float totWater=2.0;
    cout<<"Amt of water in jth glass ith row: "<<calcWater(2, 2, 2.0);
}