class Solution {
public:
    vector<int> dp;
    int n;
    int minimumCoins(vector<int>& prices) {
        n = prices.size();
        dp.resize(n, INT_MAX);

        for (int i = n - 1; i >= 0; i--) {
            int cnt = (i + 1 + 1);
            if (i + cnt >= n) {
                dp[i] = prices[i];
            }
            for (int j = i + 1; j <= min(n - 1, i + cnt); j++) {
                dp[i] = min(dp[i], prices[i] + dp[j]);
            }
        }
        return dp[0];
    }
};