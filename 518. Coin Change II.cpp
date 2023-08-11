class Solution {
public:
    int change(int value, vector<int>& a) {
        int n = a.size();
        vector<int> prev(value+1,0),cur(value+1,0);
        for(int T=0;T<=value;T++) prev[T] = (T%a[0]==0);
        for(int ind = 1;ind<n;ind++){
            for(int T=0;T<=value;T++){
                int notTake = prev[T];
                int take = 0;
                if(a[ind] <= T) take = cur[T-a[ind]];
                cur[T] = take + notTake;
            }
            prev = cur;
        }
        return prev[value];
        
    }
};
