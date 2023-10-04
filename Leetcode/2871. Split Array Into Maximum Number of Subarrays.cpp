class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
       int a = INT_MAX;
       for(auto num : nums) a &= num;
       if(a != 0) return 1;
       int b = INT_MAX;
       int res = 0;
       for(auto num : nums){
           b &= num;
           if(b == 0){
               res++;
               b = INT_MAX;
           }
       }
       return res; 
    }
};