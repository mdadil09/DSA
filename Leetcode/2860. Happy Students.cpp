class Solution {
public:
    int countWays(vector<int>& nums) {
       int n = nums.size();
       int count = 0;
       sort(nums.begin(),nums.end());
       if(nums[0] > 0) count++;
       for(int i=0;i<n-1;i++){
           if(i >= nums[i] && i+1 < nums[i+1]) count++;
       } 
       if(n-1 >= nums[n-1]) count++;
       return count;
    }
};