class Solution {
public:
    int countHomogenous(string s) {
        int ans = 0, count = 0, mod = 1e9+7;
        for(int i=0;i<s.size();i++){
            if(i>0 && s[i-1] == s[i]) count++;
            else count = 1;
            ans = (ans + count)%mod;
        }
        return ans;
    }
};