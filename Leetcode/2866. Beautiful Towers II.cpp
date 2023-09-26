class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int n = maxHeights.size();
        vector<long long> left(n), stack = {-1};
        long long res = 0, cur = 0;
        for(int i=0;i<n;i++){
            while(stack.size() > 1 && maxHeights[stack.back()] > maxHeights[i]){
                int j = stack.back();
                stack.pop_back();
                cur -= 1L*(j-stack.back()) * maxHeights[j];
            }
            cur += 1L * (i-stack.back()) * maxHeights[i];
            stack.push_back(i);
            left[i] = cur;
        }
        stack = {n};
        cur = 0;
        for(int i=n-1;i>=0;i--){
            while(stack.size() > 1 && maxHeights[stack.back()] > maxHeights[i]){
                int j = stack.back();
                stack.pop_back();
                cur -= 1L * -(j-stack.back())*maxHeights[j];
            }
            cur += 1L * -(i-stack.back()) * maxHeights[i];
            stack.push_back(i);
            res = max(res,left[i]+cur-maxHeights[i]);
        }
        return res;
    }
};