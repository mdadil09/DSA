class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size(),res = nums[0];
        unordered_set<int> s;

        for(auto el : nums) s.insert(el);
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]+1){
                res += nums[i];
            } else {
                break;
            }
        }
        while(s.find(res) != s.end()){
            res++;
        }
        return res;
    }
};