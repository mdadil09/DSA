class Solution {
public:
    int ans[12] = {}, res = 0;
    int dfs(vector<int>& jobs,int i,int k,int cur){
        if(cur>=res) return res;
        if(i==jobs.size()) return res = cur;
        unordered_set<int> workTime;
        for(auto j=0;j<k;++j){
            if(!workTime.insert(ans[j]).second) continue;
            ans[j] += jobs[i];
            dfs(jobs,i+1,k,max(cur,ans[j]));
            ans[j] -= jobs[i];
        }
        return res;
    }
    int distributeCookies(vector<int>& jobs, int k) {
        if(k==jobs.size())
            return *max_element(begin(jobs),end(jobs));
        sort(begin(jobs),end(jobs),greater<int>());
        for(int i=0;i<jobs.size();i+=k)
            res += jobs[i];
        return dfs(jobs,0,k,0);
    }
};