class Solution {
public:
    int l[100010], r[100010];
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        l[0] = nums[0];
        r[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            l[i] = min(l[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            r[i] = min(r[i+1],nums[i]); 
        }
        for(int i=1;i<n-1;i++){
            if(l[i] < nums[i] && r[i] < nums[i]){
                mini = min(mini,l[i]+nums[i]+r[i]);
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};