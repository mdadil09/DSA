#include <bits/stdc++.h> 
using namespace std;
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    map<long long,int> mp;
    long long sum = 0;
    int res = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        sum += nums[i];
        if(sum == k){
            res = max(res,i+1);
        }
        long long rem = sum - k;
        if(mp.find(rem) != mp.end()){
            int len = i - mp[rem];
            res = max(res,len);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    return res;
}