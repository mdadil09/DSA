class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {
        int n = nums.size();
        long long res = 0;
        long long mod = 1e9+7;
        for(int i=0;i<n;i++){
            if(s[i] == 'R') nums[i] += d;
            else nums[i] -= d;
        }
        sort(nums.begin(),nums.end());
        vector<long long> pref(n,0);
        pref[0] = nums[0];
        for(int i=1;i<n;i++){
            pref[i] = pref[i-1] + nums[i];
        }
        for(long long i=1;i<n;i++){
            res = (res + (i*(long long)nums[i])-pref[i-1])%mod;
        }
        return res;
    }
};