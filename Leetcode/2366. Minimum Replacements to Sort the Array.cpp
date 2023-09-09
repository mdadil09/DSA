class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        int x = nums[n-1];
        for(int i=n-2;i>=0;i--){
            long long parts = ceil(nums[i]/(double)x);
            res += (parts-1);
            x = nums[i]/parts;
        }
        return res;
    }
};