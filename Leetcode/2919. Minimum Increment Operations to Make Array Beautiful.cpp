#define ll long long int

class Solution {
public:
    vector<ll> dp;
    ll solve(int id,vector<int> &nums,int k){
        if(id > nums.size()-3) return 0;
        if(dp[id] != -1) return dp[id];
        int n = nums.size();
        ll op1 = max(0,k-nums[id]) + solve(id+1,nums,k);
        ll op2 = INT_MAX, op3 = INT_MAX;
        if(id+1 < n) op2 = max(0,k-nums[id+1]) + solve(id+2,nums,k);
        if(id+2 < n) op3 = max(0,k-nums[id+2]) + solve(id+3,nums,k);

        return dp[id] = min({op1,op2,op3});  
    }
    long long minIncrementOperations(vector<int>& nums, int k) {
        int n = nums.size();
        dp.resize(n+1,-1);
        return solve(0,nums,k);
    }
};