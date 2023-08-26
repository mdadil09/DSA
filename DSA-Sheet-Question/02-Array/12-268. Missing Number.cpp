//First method

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        nums.push_back(-1);
        int i = 0;
        while(i<=n){
            if(nums[i] == -1 || nums[i] == i) i++;
            else swap(nums[i],nums[nums[i]]);
        }
        for(int i=0;i<=n;i++){
            if(nums[i] == -1) return i;
        }
        return 0;
    }
};

//Second Method: Using Bit manipulation

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size(),i = 0;
        for(int n : nums){
            res ^= n;
            res ^= i;
            i++;
        }
        return res;
    }
};