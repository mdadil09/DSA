class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        unordered_map<int,vector<int>> nPos;
        for(int i=0;i<nums.size();++i){
            nPos[nums[i]].push_back(i);
        }
        int res = INT_MAX;
        for(auto &[el,pos]:nPos){
            pos.push_back(pos[0] + nums.size());
            int seconds = 0;
            for(int i=1;i<pos.size();++i){
                seconds = max(seconds,(pos[i]-pos[i-1])/2);
            }
                res = min(res,seconds);
        }
        return res;
    }
};