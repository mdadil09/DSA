//Solution 1: TLE (622/633 passed)

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int res = 0;
        for(int i=0;i<nums.size();i++){
            int count = 0;
            for(int j=i;j<nums.size();j++){
                count += (nums[j] == maxi);
                if(count>=k){
                    res++;
                }
            }
        }
        return res;
    }
};

//solution 2: All case passed

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        long long res = 0;
        unordered_map<int,int> mp;
        int i = 0, j = 0;
        while(j < nums.size()){
            mp[nums[j]]++;
            while(mp[maxi] >= k){
                res += (n - j);
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return res;
    }
};