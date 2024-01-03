class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0)
                count++;
            if (count >= 2)
                return true;
        }
        return false;
    }
};