#include <bits/stdc++.h>
using namespace std;

//Find next greater number with same set of digits

void nextBig(int num[], int n){
    int i;
    for (i=n-1; i>0; i--){
        if (num[i] > num[i-1]){
            break;
        }
    }
    i--;
    if (i == 0){
        cout << "-1";
    }
    else{
        int small = num[i];
        int index = i;
        int nextIndex = i+1;
        i+=2;
        while(i<n){
            if (num[i] > small && num[i] < num[nextIndex]){
                nextIndex = i;
            }
            i++;
        }
        swap(num[index], num[nextIndex]);
        sort(num+index+1, num+n);

        for (int i=0; i<n; i++){
            cout << num[i] << " ";
        }
    }
}

int main(){
    int num[] = {3,8,2,7,6};
    int n = size(num);
    nextBig(num, n);

}