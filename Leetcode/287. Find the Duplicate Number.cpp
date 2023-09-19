class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int res = 0;
        unordered_map<int,int> mp;
        for(int n : nums){
            mp[n]++;
        }
        for(auto i : mp){
            if(i.second > 1) res = i.first;
        }
        return res;
    }
};