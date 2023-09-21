class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        unordered_map<int,int> mp;
        int maxi = 0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto m : mp){
            maxi = max(maxi,m.second);
        }
        if(maxi <= n/2){
            if(n%2) return 1;
            return 0;
        }
        return abs(n-maxi*2);
    }
};