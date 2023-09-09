class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        nums.insert(nums.begin(),0);
        int n = nums.size();
        int res = 0;
        int i = 0, sum = 0;;
        for(int j=0;j<n;j++){
            if(nums[j] == 1){
                sum += 1;
            }else{
                sum = j-i-1;
                i=j;
            }
            res = max(res,sum);
        }
        return res;
    }
}; 