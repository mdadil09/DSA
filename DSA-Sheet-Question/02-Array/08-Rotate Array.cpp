class Solution {
public:
    void reverseArray(vector<int>& nums, int start,int end){
        while(start<=end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if(k < 0) k += n;
        reverseArray(nums,0,n-k-1);
        reverseArray(nums,n-k,n-1);
        reverseArray(nums,0,n-1);
    }
};