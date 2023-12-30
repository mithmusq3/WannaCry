#include <bits/stdc++.h>
using namespace std;

//Find amount of water in a given glass

void waterAmount(int m, int n, int X){
    float water[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            water[i][j] = 0;
        }
    }
    water[0][0] = X;
    int flag;
    for(int i=0; i<m; i++){
        flag = 0;
        for (int j=0; j<i+1; j++){
            if (water[i][j] > 1){
                flag = 1;
                float rem = water[i][j]-1;
                water[i][j] = 1;
                water[i+1][j] += (rem)/2;
                water[i+1][j+1] += (rem)/2;
            }
            
        }
        if (flag == 0) break;
    }
    cout << "Water in " << m << " row and " << n << " column is: " << water[m-1][n-1];
}

int main(){
    int i,j,X;
    cin >> i >> j >> X;
    waterAmount(i, j, X);
}