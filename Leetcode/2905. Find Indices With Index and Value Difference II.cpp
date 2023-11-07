class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int ix, int vy) {
        int n = nums.size();
        int maxi = 0, mini = 0;
        for(int i=ix;i<n;i++){
            if(nums[i-ix] < nums[mini]) mini = i - ix;
            if(nums[i-ix] > nums[maxi]) maxi = i - ix;
            if(abs(nums[i] - nums[mini]) >= vy) return {mini,i};
            if(abs(nums[maxi] - nums[i]) >= vy) return {maxi,i};
        }
        return {-1,-1};
    }
};