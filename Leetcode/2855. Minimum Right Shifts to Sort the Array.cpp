class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int pivotCount = 0, pivotId = 0;
        for(int i=1;i<n;i++){
            if(nums[i-1] > nums[i]){
                pivotId = i;
                pivotCount++;
            }
        }
        if(pivotCount > 1) return -1;
        if(pivotId == 0) return 0;
        return (nums[n-1] > nums[0]) ? -1 : n-pivotId;
    }
};