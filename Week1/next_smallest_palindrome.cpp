#include<bits/stdc++.h>
using namespace std;

bool areAll9(vector<int> num, int n){
    for(auto it:num){
        if(it!=9) return false;
    }
    return true;
}

vector<int> generateNextPalUtil(vector<int> num, int n){
    int mid = n/2;
    bool leftsmaller = false;

    int i=mid-1;
    int j= (n%2)? mid+1:mid;

    while(i>=0 && num[i]==num[j]){
        i--;
        j++;
    }

    if(i<0 || num[i]<num[j]) leftsmaller=true;

    while(i>=0){
        num[j]=num[i];
        j++;
        i--;
    }

    if(leftsmaller){
        int carry=1;
        i=mid-1;

        if(n%2 == 1){
            num[mid]+=carry;
            carry=num[mid]/10;
            num[mid]%=10;
            j=mid+1;
        }
        else j=mid;

        while(i >= 0){
            num[i]+=carry;
            carry=num[i]/10;
            num[i]%=10;

            num[j++]=num[i--];
        }
    }
    return num;
}

vector<int> generateNextPal(vector<int>num, int n){
    if(areAll9(num, n)){
        num[0]=1;
        for(int i=1; i<n; i++) num[i]=0;
        num.push_back(1);
        return num;
    }
    else return generateNextPalUtil(num, n);
}

int main(){
    vector<int> num={ 9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2 };
    vector<int> ans= generateNextPal(num, num.size());
    for(auto it: ans) cout<<it;
}