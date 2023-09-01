#include<bits/stdc++.h>
using namespace std;

//Recursive: partially accepted

int help(vector<int>& nums,int low,int high,int target){
    if(low > high) return -1;
    int mid = low + (high-low)/2;
    if(target == nums[mid]) return mid;
    else if(target > nums[mid]) return help(nums,mid+1,high,target);
    else return help(nums,low,high-1,target);
}

int search(vector<int> &nums, int target) {
    // Write your code here.
    return help(nums,0,nums.size()-1,target);
}

//Iterative Solution:

int search(vector<int> &nums, int target) {
    // Write your code here.
    int low = 0, high = nums.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(target == nums[mid]) return mid;
        else if(target > nums[mid]) low = mid + 1;
        else high = mid-1;
    }
    return -1;
}