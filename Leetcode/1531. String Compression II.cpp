class Solution {
public:
    const static int N = 127;
    int dp[101][101];
    int n;
    
    int convertFreqToLen(int x){
        return x == 1 ? 1 : x < 10 ? 2 : x < 100 ? 3 : 4;
    }

    int solve(string& s, int idx,int k){
        if(k<0) return INT_MAX/4;
        if(idx>=n || n-idx <= k) return 0;
        int& ans = dp[idx][k];
        if(ans != -1) return ans;
        ans = INT_MAX;
        int cnt[26] = {0};
        for(int j=idx,maxFreq=0;j<n;j++){
            maxFreq = max(maxFreq,++cnt[s[j]-'a']);
            ans = min(ans,convertFreqToLen(maxFreq) + solve(s,j+1,k-(j-idx+1-maxFreq)));
        }
        return ans;
    }
    int getLengthOfOptimalCompression(string s, int k) {
        memset(dp,-1,sizeof(dp));
        n = s.size();
        return solve(s,0,k);
    }
};