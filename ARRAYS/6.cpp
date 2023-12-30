#include <bits/stdc++.h>
using namespace std;

//Find next palindrome

void nextPalindrome(int arr[], int n){
    bool all9 = true;
    for (int i=0; i<n; i++){
        if (arr[i] != 9){
            all9 = false;
            break;
        }
    }

    if (all9){
        cout << "1 ";
        for(int i = 1; i < n; i++)
            cout << "0 ";
             
        cout << "1 ";
    }
    else{

        int mid = n/2;
        int i=mid-1;
        int j = (n%2)? mid+1 : mid;
        bool leftsmall = false;

        while (arr[i] == arr[j]){
            i--, j++;
        }
        if (i<0 || arr[i]<arr[j]){
            leftsmall = true;
        }
        while (i>=0){
            arr[j] = arr[i];
            i--;
            j++;

        }

        if (leftsmall == true){
            i=mid-1;
            int carry = 1;

            if (n%2 == 1){
                arr[mid] += carry;
                carry = arr[mid]/10;
                arr[mid] %=10;
                j = mid+1;
            }
            else j=mid;

            while (i>=0){
                arr[i] +=carry;
                carry = arr[i]/10;
                arr[i]%=10;
                arr[j] = arr[i];
                i--;
                j++;
            }
        }
        for (int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int num[] = {1,2,5,4,3,6,5,7,6,5,7};
    nextPalindrome(num,size(num));

}