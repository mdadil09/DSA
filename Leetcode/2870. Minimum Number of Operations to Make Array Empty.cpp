class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int op = 0;
        for(auto a : mp){
            if(a.second == 1) return -1;
            op += (a.second + 2)/3;
        }
        return op;
    }
};