class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size(), maxi = INT_MIN;
        vector<int> res;
        vector<queue<int>> loc(30);
        for(int i=0;i<n;i++){
            for(int bit=0;bit<30;bit++){
                if(nums[i] & 1 << bit) loc[bit].push(i);
            }
        }
        for(int i=0;i<n;i++){
            int hi = i;
            for(auto& q : loc){
                if(q.size() && i > q.front()) q.pop();
                if(q.size()) hi = max(hi,q.front()); 
            }
            res.push_back(hi-i+1);
        }
        return res;
    }
};