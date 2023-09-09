class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<unsigned long long> a(target+1,0);
        a[0] = 1;
        for(int i=1;i<=target;i++){
            for(int x : nums){
                if(i >= x) a[i] += a[i-x];
                else break;
            }
        }
        return (int)a[target];
    }
};