class Solution {
public:
    int minOperations(vector<int>& nums) {
       int n = nums.size();
       int res = 0;
       int i=0,j=0;
       sort(nums.begin(),nums.end());
       nums.erase(unique(begin(nums),end(nums)),end(nums)); 
       for(int k=nums.size();j<k;++j){
           while(nums[i]+n<=nums[j]) ++i;
           res = max(res,j-i+1);
       }
       return n-res;
    }
};