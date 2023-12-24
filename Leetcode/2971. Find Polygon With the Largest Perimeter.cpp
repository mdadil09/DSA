class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long prefSum = nums[0] + nums[1];
        long long ans = 0;
        for(int i=2;i<nums.size();i++){
            if(prefSum > nums[i]){
                ans = max(ans,prefSum + nums[i]);
            }
            prefSum += nums[i];
        }
        return ans == 0 ? -1 : ans;
    }
};