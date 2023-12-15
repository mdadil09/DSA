class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        int countOne = 0;
        long long res = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                res += countOne;
            } else {
                countOne++;
            }
        }
        return res;
    }
};