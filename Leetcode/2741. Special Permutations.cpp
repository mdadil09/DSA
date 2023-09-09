class Solution {
public:
    int mod = 1e9+7;
    int help(vector<int>& nums,int j,int i,int msk,vector<vector<int>>&dp){
        if(i == nums.size()) return 1;
        if(dp[j+1][msk] != -3) return dp[j+1][msk];
        int res = mod;
        for(int ind=0;ind<nums.size();ind++){
            if(msk & (1<<ind)) continue;
            if(j == -1 || nums[ind]%nums[j] == 0 || nums[j]%nums[ind] == 0){
                res += help(nums,ind,i+1, msk | (1<<ind),dp)%mod;
                res %= mod;
            }
        }
        return dp[j+1][msk] = res;
    }
    int specialPerm(vector<int>& nums) {
        vector<vector<int>> dp(21,vector<int>((1 << 14)+7,-3));
        return help(nums,-1,0,0,dp)%mod;
    }
};