class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> mp;
        int res = 0, sum = 0, i = 0;
        if(n == 0) return 0;
        while(i < n){
            sum += nums[i];
            if(sum == k) res++;
            if(mp.find(sum - k) != mp.end()){
                res += mp[sum - k];
            }
            mp[sum]++;
            i++;
        }
        return res;
    }
};