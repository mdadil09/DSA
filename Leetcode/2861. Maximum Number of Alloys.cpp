class Solution {
public:
    #define ll long long
    bool help(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock,vector<int>& cost,ll x, vector<int>& comp){
        ll cst = 0;
        for(int i=0;i<n;i++){
            cst += max(x*comp[i] - stock[i],0ll)*cost[i];
        }
        return cst <=budget;
    }
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        ll ans = 0;
        for(auto comp : composition){
            ll low = 0, high = 1e9, res = 0;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(help(n,k,budget,composition,stock,cost,mid,comp)){
                    res = mid;
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
            ans = max(ans,res);
        }
        return (int)ans;
    }
};