//Brute force: O(n^2) => TLE

class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        int n = nums.size();
        long long res = 0;
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=i;j<n;j++){
                if(nums[j]%modulo == k) count++;
                if(count%modulo == k) res++;
            }
        }
        return res;
    }
};

//optimal: O(N)

class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int preSum = 0;
        long long res = 0;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            if(nums[i]%modulo == k) preSum +=1;
            preSum %= modulo;
            res += mp[(preSum - k + modulo)%modulo];
            mp[preSum]++;
        }
        return res;
    }
};