class Solution {
public:
    int minimumSum(int n, int k) {
        int sum = 0;
        unordered_set<int> st;
        for(int i=1;st.size() < n;i++){
            if(st.find(k-i) == st.end()){
                st.insert(i);
                sum += i;
            }
        }
        return sum;
    }
};