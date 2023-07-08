class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_price = prices[0], max_profit = 0;
        for(int i=0;i<n;i++){
            int cost = prices[i] - min_price;
            max_profit = max(max_profit,cost);
            min_price = min(min_price,prices[i]);
        }
        return max_profit;
    }
};