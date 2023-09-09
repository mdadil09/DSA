class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int aheadBuy, aheadNotBuy, curBuy, curNotBuy;
        aheadNotBuy = aheadBuy = 0;
        for(int i=n-1;i>=0;i--){
            curNotBuy = max(prices[i]+aheadBuy,aheadNotBuy);
            curBuy = max(-prices[i]-fee+aheadNotBuy,aheadBuy);

            aheadBuy = curBuy;
            aheadNotBuy = curNotBuy;
        }
        return aheadBuy;
    }
};