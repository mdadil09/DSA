class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
       int n = grid[0].size();
       int j = 0;
       for(int i=0;i<n;i++){
           if(i == j) continue;
           if(grid[j][i] == 0) j = i;
       } 
       return j;
    }
};