class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int x, int y) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(abs(i-j) >= x && abs(nums[i] - nums[j]) >= y){
                    return {i,j};
                } 
            }
        }
        return {-1,-1};          
    }
};