#include<bits/stdc++.h>
using namespace std;

//Using sorting:-

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        sort(nums.begin(),nums.end());
        res = nums[n-k];
        return res;
    }
};

//Using priority queue minHeap

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(int i=0;i<n;i++){
            minHeap.push(nums[i]);
            if(minHeap.size() > k) minHeap.pop();
        }
        return minHeap.top();
    }
};