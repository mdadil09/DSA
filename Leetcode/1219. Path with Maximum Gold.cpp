class Solution {
public:
    int v[5] ={0,1,0,-1};
    int help(vector<vector<int>>& grid,int m,int n,int r, int c){
        if(r < 0 || r == m || c < 0 || c == n || grid[r][c] == 0) return 0;
        int origin =grid[r][c];
        grid[r][c] = 0;
        int maxi = 0;
        for(int i=0;i<4;i++){
            maxi = max(maxi, help(grid,m,n,v[i] + r, v[i+1] + c));
        }
        grid[r][c] = origin;
        return maxi + origin;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), maxi = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                maxi = max(maxi,help(grid,m,n,i,j));
            }
        }
        return maxi;
    }
};