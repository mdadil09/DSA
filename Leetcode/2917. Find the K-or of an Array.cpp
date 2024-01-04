class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
       int ans = 0;
       for(int i=0;i<=31;i++){
           int count = 0;
           for(int el : nums){
               if((el & (1<<i))){
                   count++;
               }
           }
           if(count >= k) ans += (1<<i);
       }
       return ans; 
    }
};