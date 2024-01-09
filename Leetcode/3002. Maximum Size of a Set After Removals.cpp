class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
       set<int> st1,st2,common;
       for(int x : nums1){
           st1.insert(x);
       }
       for(int x : nums2){
           st2.insert(x);
           if(st1.find(x) != st1.end()){
               common.insert(x);
           }
       }
       int s1 = st1.size(),s2 = st2.size(), c = common.size();
       int res = min(n,min(s1-c,n/2)+min(s2-c,n/2)+c);
       return res;
    }
};