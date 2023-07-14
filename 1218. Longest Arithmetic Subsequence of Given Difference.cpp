class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        unordered_map<int,int> mp;
        int res = 0;
        int n = arr.size();
        for(int i=n-1;i>=0;i--){
            mp[arr[i]] = 1 + mp[arr[i]+diff];
            res = max(res,mp[arr[i]]);
        }
        return res;
    }
};