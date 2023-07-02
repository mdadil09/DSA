class Solution {
public:
    int ans = 0;
    void help(int i,vector<vector<int>>& v,int l,vector<int>& temp){
        if(i == v.size()){
            for(auto a : temp){
                if(a != 0) return;
            }
            ans = max(ans,l);
            return;
        }
        help(i+1,v,l,temp);
        temp[v[i][0]]--;
        temp[v[i][1]]++;
        help(i+1,v,l+1,temp);
        temp[v[i][0]]++;
        temp[v[i][1]]--;
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> temp(n,0);
        help(0,requests,0,temp);
        return ans;
    }
};