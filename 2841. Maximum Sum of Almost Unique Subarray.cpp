class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int n = nums.size();
        long long sum = 0, ans = 0,unique = 0;
        unordered_map<int,int> mp;
        for(int i=0,j=0;i<n;i++){
            sum += nums[i];
            mp[nums[i]]++;
            if(mp[nums[i]] == 1) unique++;
            if(i >= k){
                sum -= nums[j];
                mp[nums[j]]--;
                if(mp[nums[j]] == 0) unique--;
                j++;
            }
            if(unique >= m) ans = max(ans,sum);
        }
        return ans;
    }
};