class Solution {
public:
    int findLHS(vector<int>& nums) {
        int res = 0;
        unordered_map<int,int> mp;
        for(auto num : nums){
            mp[num]++;
        }
        for(auto it : mp){
            auto itr = mp.find(it.first+1);
            if(itr != mp.end()){
                res = max(res,it.second+itr->second);
            }
        }
        return res;
    }
};