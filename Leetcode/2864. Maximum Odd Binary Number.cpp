class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = -1;
        string ans = "";
        for(int i=0;i<s.size();i++) count += ((s[i] == '1') ? 1 : 0);
        for(int i=0;i<s.size();i++,count--){
            ans += (count > 0) ? '1' : '0';
        }
        ans.pop_back();
        return ans + '1';
    }
};