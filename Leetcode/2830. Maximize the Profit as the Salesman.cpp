class Solution {
public:
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        vector<int> dp(n+1);
        vector<vector<vector<int>>> v(n+1);
        for(auto &a : offers){
            v[a[1]+1].push_back({a[0]+1,a[1]+1,a[2]});
        }
        for(int e=1;e<=n;e++){
            dp[e] = dp[e-1];
            for(auto& a : v[e]){
                dp[e] = max(dp[e],dp[a[0]-1]+a[2]);
            }
        }
        return dp[n];
    }
};