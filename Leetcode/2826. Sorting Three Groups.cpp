#include<bits/stdc++.h>
using namespace std;

//Using recursion: passed all case but will give TLE;

class Solution {
public:
    int help(vector<int>& nums,int i,int j){
        if(i<0) return 0;
        if(j<0) return 1000;
        int res = INT_MAX;
        if(j == nums[i]) res = help(nums,i-1,j);
        else {
            if(nums[i] < j) res = min(res,help(nums,i-1,nums[i]));
            res = min(res,1+help(nums,i-1,j));
            res = min(res,1+help(nums,i-1,j-1));
        }
        return res;
    }
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int res = help(nums,n-1,3);
        return res;
    }
};

//Using recursion + memoization;

class Solution {
public:
    int help(vector<int>& nums,int i,int j,vector<vector<int>>& dp){
        if(i<0) return 0;
        if(j<0) return 1000;
        if(dp[i][j] != -1) return dp[i][j];
        int res = INT_MAX;
        if(j == nums[i]) res = help(nums,i-1,j,dp);
        else {
            if(nums[i] < j) res = min(res,help(nums,i-1,nums[i],dp));
            res = min(res,1+help(nums,i-1,j,dp));
            res = min(res,1+help(nums,i-1,j-1,dp));
        }
        return dp[i][j] = res;
    }
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(4,-1));
        int res = help(nums,n-1,3,dp);
        return res;
    }
};