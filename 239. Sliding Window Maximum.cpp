#include<bits/stdc++.h>
using namespace std;

//Brute force:

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       int n = nums.size();
       vector<int> res;
       int i = 0;
       for(int j=0;j<=n-k;j++){
           int maxi = INT_MIN;
           for(int i=j;i<j+k;i++){
               maxi = max(maxi,nums[i]);
           }
           res.push_back(maxi);
       }
        return res;
    }
};

//Optimal Approach:

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       int n = nums.size();
       vector<int> res;
       deque<int> dq;
       for(int j=0;j<n;j++){
           if(!dq.empty() && dq.front() == (j-k)) dq.pop_front();
           while(!dq.empty() && nums[dq.back()] <= nums[j]) dq.pop_back();
           dq.push_back(j);
           if(j >= k-1) res.push_back(nums[dq.front()]);
       }
        return res;
    }
};