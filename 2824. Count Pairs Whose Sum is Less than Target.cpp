#include<bits/stdc++.h>
using namespace std;

//Brute force: using two loops

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] < target) count++;
            }
        }
        return count;
    }
};

//Better Approach: Sorting + Two pointer

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(i<j){
            if(nums[i]+nums[j] < target){
                count += j-i;
                i++;
            } else {
                j--;
            }
        }
        return count;
    }
};