#include <bits/stdc++.h>
using namespace std;

//Print matrix diagonally

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    for(int i=0;i<n;i++){
        int x=i,y=0;
        while(x>=0 && y<m){
            cout<<a[x][y]<<" ";
            x--;
            y++;
        }
        cout<<endl;
    }
    for(int i=1;i<m;i++){
        int x=n-1,y=i;
        while(x>=0 && y<m){
            cout<<a[x][y]<<" ";
            x--;
            y++;
        }
        cout<<endl;
    }
    return 0;
}