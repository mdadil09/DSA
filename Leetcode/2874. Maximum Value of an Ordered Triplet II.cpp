class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long res = 0;
        int max1 = 0, max2 = 0;
        for(int &num : nums){
            res = max(res,1LL*max2*num);
            max2 = max(max2,max1-num);
            max1 = max(max1,num);
        }
        return res;
    }
};