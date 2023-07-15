// 1St -- Recursive solution

class Solution {
public:
    int help(vector<vector<int>>& events, int n,int pos,int k){
        if(pos >= n || k == 0) return 0;
        int i;
        for(i=pos+1;i<n;i++){
            if(events[i][0] > events[pos][1]) break;
        }
        return max(help(events,n,pos+1,k),events[pos][2] + help(events,n,i,k-1));
    }
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        sort(events.begin(),events.end());
        return help(events,n,0,k);
    }
};

// 2nd -- DP

class Solution {
public:
    int help(vector<vector<int>>& events, int n,int pos,int k,vector<vector<int>>& dp){
        if(pos >= n || k == 0) return 0;
        if(dp[pos][k] != -1) return dp[pos][k];
        int i;
        for(i=pos+1;i<n;i++){
            if(events[i][0] > events[pos][1]) break;
        }
        return dp[pos][k] = max(help(events,n,pos+1,k,dp),events[pos][2] + help(events,n,i,k-1,dp));
    }
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        sort(events.begin(),events.end());
        return help(events,n,0,k,dp);
    }
};

// 3rd -- Dp with binary search

class Solution {
public:
    int help(vector<vector<int>>& events, int n,int pos,int k,vector<vector<int>>& dp){
        if(pos >= n || k == 0) return 0;
        if(dp[pos][k] != -1) return dp[pos][k];
        int i;
        vector<int> temp = {events[pos][1],INT_MAX,INT_MAX};
        i = upper_bound(events.begin()+pos+1,events.end(),temp) - events.begin();
        return dp[pos][k] = max(help(events,n,pos+1,k,dp),events[pos][2] + help(events,n,i,k-1,dp));
    }
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        sort(events.begin(),events.end());
        return help(events,n,0,k,dp);
    }
};