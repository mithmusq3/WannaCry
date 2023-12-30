#include <bits/stdc++.h>
using namespace std;

//A Boolean Matrix

int main(){
    int m,n;
    cin >> m,n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (a[i][j] == 1){
                for (int k=0; k<n; k++){
                    a[i][k]=-1;
                }
                for (int k=0; k<m; k++){
                    a[k][j]=-1;
                }
            }
        }
    }
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (a[i][j] == -1){
                a[i][j] = 1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}