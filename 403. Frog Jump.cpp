class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        vector<vector<int>> dp(n,vector<int>(2003,0));
        dp[0][0] = 1;
        for(int i=1;i<n;i++){
            int cur = stones[i];
            for(int j=i-1;j>=0;j--){
                int jump = cur - stones[j];
                if(jump > 2000) break;
                dp[i][jump] = (dp[j][jump] || dp[j][jump+1] || dp[j][jump-1]);
                if(i==n-1 && dp[i][jump]) return true;
            }
        }
        return false;
    }
};