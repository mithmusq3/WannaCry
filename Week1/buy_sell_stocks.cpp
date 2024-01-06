#include<bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>& prices) {
    int maxProfit=0;
    int mini=prices[0];

    for(int i=0; i<prices.size(); i++){
        int curProfit= prices[i]-mini;
        maxProfit=max(maxProfit, curProfit);
        mini= min(mini, prices[i]);
    }
    return maxProfit;
}