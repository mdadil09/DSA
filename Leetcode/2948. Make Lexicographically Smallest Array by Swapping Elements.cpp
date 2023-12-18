class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int> ans(n,0);

        vector<pair<int,int>> vpair;
        for(int i=0;i<n;i++){
            vpair.push_back({nums[i],i});
        }
        sort(vpair.begin(),vpair.end());

        int gid = 1;
        unordered_map<int,vector<pair<int,int>>>mp;
        for(int i=0;i<n;i++){
            if(i == 0 || (vpair[i].first - vpair[i-1].first) > limit){
                gid++;
            }
            mp[gid].push_back(vpair[i]);
        }
        for(auto p : mp){
            vector<pair<int,int>> vp = p.second;
            vector<int> id,el;
            for(auto p2:vp){
                el.push_back(p2.first);
                id.push_back(p2.second);
            }
            sort(id.begin(),id.end());
            for(int i=0;i<id.size();i++){
                ans[id[i]] = el[i];
            }
        }
        return ans;
    }
};