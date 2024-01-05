#include<bits/stdc++.h>//buy and sell stocks
using namespace std;

void stockBuySell(int a[],int n)
{
    if(n==1)
    return;
    int i=0;
    while(i<n-1)
    {
        while(i<n-1 && a[i+1]<=a[i])
        i++;
        if(i==n-1)
        break;
        int buy=i++;
        while((i<n)&& a[i-1]<a[i])
        i++;
        int sell=i-1;

        cout << "Buy on day: " << buy 
             << "\t Sell on day: " << sell << endl; 
    }
    return;
}

int main()
{
    int price[] = { 100, 180, 260, 310, 40, 535, 695 }; 
    int n = sizeof(price) / sizeof(price[0]); 
    stockBuySell(price, n); 
  
    return 0;
}