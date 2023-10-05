//Method 1 : O(n)^3

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long res = 0;
        long long n = nums.size();
        long long x = 0;
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                for(long long k=j+1;k<n;k++){
                    if(i<j && j<k){
                        x = (nums[i] - nums[j])*(long long)nums[k];
                        res = max(res,x);
                    }
                }
            }
        }
        return res;
    }
};

//Method 2 : O(n)

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