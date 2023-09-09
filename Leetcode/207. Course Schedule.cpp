class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses,vector<int>());
        for(vector<int>& pre:prerequisites)
            adj[pre[0]].push_back(pre[1]);
        vector<int> visited(numCourses,0);
        for(int i=0;i<numCourses;i++)
            if(visited[i]==0 && isCyclic(adj,visited,i))
                return false;
        return true;
    }
    bool isCyclic(vector<vector<int>>& adj,vector<int>& visited,int v){
        if(visited[v]==2) return true;
        visited[v] = 2;
        for(int i=0;i<adj[v].size();++i){
            if(visited[adj[v][i]] != 1)
                if(isCyclic(adj,visited,adj[v][i]))
                    return true;
        }
        visited[v] = 1;
        return false;
    }
};