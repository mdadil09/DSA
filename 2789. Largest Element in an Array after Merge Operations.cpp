#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long res = 0,sum = 0;
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            if(sum < nums[i]){
                sum = 0;
            }
            sum += nums[i];
            res = max(res,sum);
        }
        return res;
    }
};