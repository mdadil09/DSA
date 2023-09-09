class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        map<int,int> mp;
        long long res = 0;
        int i = 0, j = 0;
        while(j < n){
            mp[nums[j]]++;
            while(mp.size()>1 && mp.rbegin()->first-mp.begin()->first > 2){
                mp[nums[i]]--;
                if(mp[nums[i]] == 0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            res += j-i+1;
            j++;
        }
        return res;
    }
};