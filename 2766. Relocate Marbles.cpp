class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int el : nums){
            mp[el]++;
        }
        int n = moveFrom.size();
        for(int i=0;i<n;i++){
            int s = moveFrom[i];
            int e = moveTo[i];
            if(s == e) continue;
            mp[e] += mp[s];
            mp[s] = 0;
        }
        for(auto m : mp){
            if(m.second > 0){
                res.push_back(m.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};