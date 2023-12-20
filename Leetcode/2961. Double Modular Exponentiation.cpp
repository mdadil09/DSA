#define ll long long

class Solution {
public:
    ll pow(ll a,ll b,ll m){
        ll ans = 1;
        while(b){
            if(b%2 != 0){
                ans = (a*ans)%m;
                b--;
            } else {
                a = (a*a)%m;
                b = b/2;
            }
        }
        return ans;
    }
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        int n = variables.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            auto v = variables[i];
            int a = v[0], b = v[1], c = v[2],m = v[3];
            ll val = pow(pow(a,b,10),c,m);
            if(val == target) ans.push_back(i);
        }
        return ans;
    }
};