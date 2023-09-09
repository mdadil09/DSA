class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0, j = 0;
        int res = 0;
        while(j < n){
            if(nums[j]-nums[i] > 2*k) i++;
            else res = max(res,j-i+1);
            j++;
        }
        return res;
    }
};