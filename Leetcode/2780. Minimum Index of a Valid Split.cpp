class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int dominant = -1;
        for(auto &x : mp){
            if(x.second * 2 > n){
                dominant = x.first;
                break;
            }
        }
        int count = 0;
        int splitIndex = -1;
        for(int i=0;i<n-1;i++){
            if(nums[i] == dominant){
                count++;
                int count2 = mp[dominant] - count;
                if(count * 2 > i+1 && count2 * 2 > n-i-1){
                    splitIndex = i;
                    break;
                }
            }
        }
        return splitIndex;
    }
};