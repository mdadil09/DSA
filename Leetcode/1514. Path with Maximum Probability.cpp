class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>> adj(n);
        for(int i=0;i<edges.size();i++){
            int x = edges[i][0];
            int y = edges[i][1];
            adj[x].push_back({y,succProb[i]});
            adj[y].push_back({x,succProb[i]});
        }
        vector<double> res(n,0.0);
        res[start] = 1.0;
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto x : adj[curr]){
                int node = x.first;
                double prob = x.second;
                double newProb = res[curr]*prob;
                if(newProb > res[node]){
                    res[node] = newProb;
                    q.push(node);
                }
            }
        }
        return res[end];
    }
};