class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int oneCount = 0,zeroCount = 0, ans = INT_MIN;
        for(int i=0;i<n-1;i++){
            if(s[i] == '1') oneCount++;
            else zeroCount++;

            ans = max(ans,zeroCount-oneCount);
        }
        if(s[n-1] == '1') oneCount++;
        return ans = ans+oneCount;
    }
};