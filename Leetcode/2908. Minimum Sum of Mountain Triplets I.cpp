class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    int sum = 0;
                    if((nums[i] < nums[j] && nums[k] < nums[j])){
                        sum += (nums[i]+nums[j]+nums[k]);
                        cout<<sum<<" ";
                        mini = min(mini,sum);
                    }
                }
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};