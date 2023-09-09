class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int res = 0, curr = 1;
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0 && res == 0 && nums[i] <= threshold) res = 1;
            for(int j=i+1;j<n;j++){
                if(nums[i]%2 == 0 && nums[j]%2 != nums[j-1]%2 && nums[j] <= threshold && nums[i] <=threshold){
                    curr++;
                    res = max(res,curr);
                } else {
                    break;
                }
            }
            curr = 1;
        }
        return res;
    }
};