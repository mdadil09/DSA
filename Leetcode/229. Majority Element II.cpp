class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        if(n == 1) return nums;
        int x = floor(n/3);
        unordered_map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        for(auto i : mp){
            if(i.second > x) ans.push_back(i.first);
        }
        return ans;
    }
};