class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int res = 0;
        int i=0;
        for(int j=0;j<n;j++){
            res = max(res,++mp[nums[j]]);
            if(j-i+1-res > k){
                --mp[nums[i++]];
            }
        }
        return res;
    }
};