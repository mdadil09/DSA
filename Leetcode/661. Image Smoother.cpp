class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size(), m = img[0].size();
        vector<vector<int>> res(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int avg = 0, cnt = 0;
                for(int x = max(i-1,0);x<min(i+2,n);x++){
                    for(int y = max(j-1,0);y<min(j+2,m);y++){
                        avg += img[x][y],cnt++;
                    }
                }
                res[i][j] = avg/cnt;
            }
        }
        return res;
    }
};