class Solution {
public:
    long long minCost(vector<int>& nums, int x) {
        int n = nums.size();
        vector<long long> res(n);
        for(int i=0;i<n;i++){
            res[i] += 1L*i*x;
            int curr = nums[i];
            for(int j=0;j<n;j++){
                curr = min(curr,nums[(i-j+n)%n]);
                res[j] += curr;
            }
        }
        long long ans = *min_element(res.begin(),res.end());
        return ans;
    }
};