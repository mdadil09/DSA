class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        int n = nums.size();
        int res = INT_MAX;
        multiset<int> s;
        for(int i=x;i<n;i++){
            s.insert(nums[i-x]);
            auto it = s.upper_bound(nums[i]);
            if(it != s.end()) res = min(res,abs(nums[i] - *it));
            if(it != s.begin()) res = min(res,abs(nums[i] - *prev(it)));
        }
        return res;
    }
};