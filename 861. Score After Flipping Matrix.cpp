//Method-1

class Solution {
public:
    void flipRow(vector<vector<int>>& grid,int row,int n){
        for(int i=0;i<n;i++){
            if(grid[row][i] == 0) grid[row][i] = 1;
            else grid[row][i] = 0;
        }
    }
    void flipCol(vector<vector<int>>& grid,int col,int m){
        for(int i=0;i<m;i++){
            if(grid[i][col] == 0) grid[i][col] =1;
            else grid[i][col] = 0;
        }
    }
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> col(m,0);
        for(int i=0;i<n;i++){
            if(grid[i][0] == 0) flipRow(grid,i,m);
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1) col[j]++;
            }
        }
        for(int j=0;j<m;j++){
            if(col[j] <= n/2) flipCol(grid,j,n);
        }
        int result = 0,sum;
        for(vector<int> &v : grid){
            sum = 0;
            for(int j = v.size()-1;j>=0;j--){
                if(v[j] == 1) sum += pow(2,v.size()-1-j);
            }
            result += sum;
        }
        return result;
    }
};

//Method-2

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int res = 0;
        res += (1<<(m-1))*n;
        for(int j=1;j<m;j++){
            int same = 0;
            for(int i=0;i<n;i++){
                if(grid[i][0] == grid[i][j]) same++;
            }
            res += (1 <<(m-1-j))*max(same,n-same);
        }
        return res;
    }
};