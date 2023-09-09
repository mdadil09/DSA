class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long ans = 0;
        set<int> st;
        for(int i=1;st.size() < n;i++){
            if(st.find(target-i) == st.end()){
                st.insert(i);
                ans += i;
            }
        }
        return ans;
    }
};