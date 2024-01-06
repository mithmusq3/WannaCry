//Find the majority element (with frequency > N/2)
#include <bits/stdc++.h>
using namespace std;

void majority(int a[], int n){
    unordered_map<int,int> mp;
    int maxf = 0;
    int maxfind = -1;
    for(int i = 0; i<n; i++){
        if(mp.count(a[i])){
            mp[a[i]]++;
            if(mp[a[i]] > maxf){
                maxf = mp[a[i]];
                maxfind = i;
            }
        }
        else
            mp[a[i]] = 1;
    }
    if(maxf > n/2)
        cout << "Majority element = " << a[maxfind] << endl;
    else
        cout << "No majority element.\n";
}

int main(){
    int a[] = {7,3,2,7,7,2,7};
    majority(a,7);
    return 0;
}