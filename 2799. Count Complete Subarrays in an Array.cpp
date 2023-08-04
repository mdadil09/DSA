#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        unordered_set<int>st(nums.begin(),nums.end());
        int k = st.size();
        unordered_map<int,int> mp;
        int j = 0;
        for(int i=0;i<n;i++){
            k -= mp[nums[i]]++ == 0;
            while(k == 0){
                k += --mp[nums[j++]] == 0;
            }
            res += j;
        }
        return res;
    }
};