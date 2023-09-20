class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        int res = INT_MIN;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            sum += nums[i];
            mp[sum] = i;
        }
        int target = sum-x;
        sum = 0;
        mp[0] = -1;
        if(target<0) return -1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(mp.find(sum-target) != mp.end()){
                res = max(res,i-mp[sum-target]);
            }
        }
        return res == INT_MIN ? -1 : n-res;
    }
};