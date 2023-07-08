class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        long long res = 0;
        if(n <= 2) return 0;
        vector<int> v;
        for(int i=0;i<n-1;i++){
           v.push_back(weights[i] + weights[i+1]);
        }
        sort(v.begin(),v.end());
        long long min_sum = 0, max_sum = 0;
        for(int i=0;i<k-1;i++){
            min_sum += v[i];
            max_sum += v[n-2-i]; 
        }
        res = max_sum - min_sum;
        return res;
    }
};