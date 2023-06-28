const int MIN = -1e4, offset = 5000;
class Solution {
    int ans,n;
    vector<int> rods;
    int dp[21][2*offset+1];
public:
    int help(int i, int diff){
        if(i == n){
            if(diff == 0) return 0;
            return INT_MIN;
        }

        int &ans = dp[i][diff + offset];
        if(ans != -1) return ans;

        int op1 = help(i+1,diff);
        int op2 = rods[i] + help(i+1,rods[i] + diff);
        int op3 = help(i+1,diff - rods[i]);

        return ans = max({op1,op2,op3});
    }
    int tallestBillboard(vector<int>& rods) {
        this->rods = rods;
        n = rods.size();
        memset(dp,-1,sizeof(dp));
        int ans = help(0,0);
        if(ans < 0) return 0;
        else return ans;
    }
};