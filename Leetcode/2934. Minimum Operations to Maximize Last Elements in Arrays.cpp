class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), count1 = 0,count2 = 0;
        int mini = min(nums1[n-1],nums2[n-1]),maxi = max(nums1[n-1],nums2[n-1]);
        for(int i=0;i<n;i++){
            int num1 = nums1[i],num2 = nums2[i];
            if(min(num1,num2) > mini) return -1;
            if(max(num1,num2) > maxi) return -1;
            if(num1 > nums1[n-1] || num2 > nums2[n-1]) count1++;
            if(num1 > nums2[n-1] || num2 > nums1[n-1]) count2++;
        }
        return min(count1,count2);
    }
};