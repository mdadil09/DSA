class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long nz1 = 0, nz2 = 0,sum1 = 0, sum2 = 0, res = 0;
        for(auto el : nums1){
            if(el == 0) nz1++;
            sum1 += el;
        }
        for(auto el : nums2){
            if(el == 0) nz2++;
            sum2 += el;
        }
        if((nz1 == 0 && sum1 < sum2 + nz2) || (nz2 == 0 && sum2 < sum1 + nz1)){
            return -1;
        }
        res = max(sum1+nz1,sum2+nz2);
        return res;
    }
};