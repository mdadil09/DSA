class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.size();
        int res = 0;
        int pre = 0, cur = 1;
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]) cur++;
            else {
                 res += min(cur,pre);
                 pre = cur;
                 cur = 1;
            }
        }
        return res + min(cur,pre);
    }
};