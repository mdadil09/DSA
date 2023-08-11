#include <bits/stdc++.h>
using namespace std; 

int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int n = prices.size();
    int profit = 0, minPrice = prices[0];
    for(int i=0;i<n;i++){
        int cost = prices[i] - minPrice;
        profit = max(profit,cost);
        minPrice = min(minPrice,prices[i]);
    }
    return profit;
}
