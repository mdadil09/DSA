class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi = 0;
        for(auto a : mp){
            maxi = max(maxi,a.second);
        }
        for(auto a : mp){
            if(maxi == a.second) res += a.second;
        }
        return res;
    }
};