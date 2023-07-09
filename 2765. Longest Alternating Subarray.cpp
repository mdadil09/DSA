class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int i = 0, j = 1, maxi = INT_MAX;
        while(j<n){
            int diff = nums[j] - nums[j-1];
            if(diff == maxi*(-1)){
                maxi = maxi * (-1);
                res = max(res,j-i+1);
            } else if(diff == 1){
                maxi = diff;
                i = j - 1;
                res = max(res,j-i+1);
            } else {
                maxi = INT_MAX;
            }
            j++;
        }
        return res ? res : -1;
    }
};