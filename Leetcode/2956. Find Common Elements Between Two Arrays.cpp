class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1(nums1.begin(),nums1.end());
        set<int> st2(nums2.begin(),nums2.end());
        int cnt1 = 0,cnt2 = 0;
        for(int i : nums1){
            if(st2.count(i)){
                cnt1++;
            }
        }
        for(int i : nums2){
            if(st1.count(i)){
                cnt2++;
            }
        }
        return {cnt1,cnt2};
    }
};