class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        int n = coins.size();
        long long int prefSum=0;
        int ans = 0,id = 0;
        sort(coins.begin(),coins.end());
        for(int t=1;t<=target;t++){
            if(id<n && t >= coins[id]){
                prefSum += coins[id];
                id++;
            } else {
                if(prefSum >= t) continue;
                prefSum += t;
                ans++;
            }
        }
        return ans;
    }
};