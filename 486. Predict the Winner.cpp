#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n;
    long long dp[20][20][2];
    int f(vector<int>& nums,int i,int j,int chance){
        if(i>j) return 0;
        if(dp[i][j][chance] != -1) return dp[i][j][chance];
        if(chance == 0)
            return dp[i][j][chance] = max(nums[i]+f(nums,i+1,j,1),nums[j]+f(nums,i,j-1,1));
        else
            return dp[i][j][chance] = min(f(nums,i+1,j,0),f(nums,i,j-1,0));
    }
    bool PredictTheWinner(vector<int>& nums) {
        long long two = 0;
        memset(dp,-1,sizeof(dp));
        n = nums.size();
        for(int i=0;i<n;i++)
            two += (long long) nums[i];
        long long one = (long long)f(nums,0,n-1,0);
        two -= one;
        return (one >= two);
    }
};