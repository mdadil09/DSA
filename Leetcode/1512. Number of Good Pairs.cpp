class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] == nums[j] && i<j){
                    v.push_back(make_pair(nums[i],nums[j]));
                    count++;
                }
            }
        }
        return count;
    }
};