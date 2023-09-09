#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void help(int index,vector<int>&nums,vector<vector<int>>& ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            help(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        help(0,nums,ans);
        return ans;
    }
};