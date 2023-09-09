class Solution {
public:
    bool isGood(vector<int>& nums) {
       int n = nums.size();
       vector<int> v(202,0);
       for(auto a : nums) v[a]++;
       if(v[n-1] != 2) return false;
       for(int i=1;i<n-1;i++){
           if(v[i] != 1) return false;
       }
       return true;
    }
};