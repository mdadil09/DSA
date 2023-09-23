class Solution {
public:
    int countPairs(vector<vector<int>>& coordinates, int k) {
        map<pair<int,int>,int>mp;
        int res = 0;
        for(auto c : coordinates){
            int x1 = c[0], y1 = c[1];
            for(int i=0;i<=k;i++){
                int x2 = x1^i;
                int y2 = y1^(k-i);
                res += mp[{x2,y2}];
            }
            mp[{x1,y1}]++;
        }
        return res;
    }
};