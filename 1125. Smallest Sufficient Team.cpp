class Solution {
public:
    int dp[1 << 16][64];
    bool choice[1 << 16][64];
    int req_mask,m;
    int help(vector<int>& people,int i,int mask){
        if(mask == req_mask) return 0;
        if(i == m) return 10000;
        if(dp[mask][i] != -1) return dp[mask][i];
        int ans1 = help(people,i+1,mask | people[i]) + 1;
        int ans2 = help(people,i+1,mask);
        if(ans1 < ans2) choice[mask][i] = 1;
        return dp[mask][i] = min(ans1,ans2);
    }
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        int n = req_skills.size(); 
        m = people.size();
        unordered_map<string,int> skills;
        for(int i=0;i<n;++i){
            skills[req_skills[i]] = i;
        }
        vector<int> v;
        for(auto &i : people){
            int h = 0;
            for(string &skill : i){
                h |=  1 << skills[skill];
            }
            v.push_back(h);
        }
        req_mask = (1 << n)-1;
        memset(dp,-1,1 << n+8);
        memset(choice,0,1 << n+6);
        help(v,0,0);
        vector<int> ans;
        for(int i=0,mask=0;i<m;++i){
            if(choice[mask][i]){
                ans.push_back(i);
                mask |= v[i];
            }
            if(mask == req_mask) break;
        }
        return ans;
    }
};