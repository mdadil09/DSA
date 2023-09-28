class Solution {
public:
    bool isValid(int i,int j,int n,int m){
        return !(i<0 || j<0 || i>=n || j >= m);
    }
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int r, int c) {
        vector<vector<int>> ans{{r,c}};
        int size = rows*cols, len = 1;
        int x = r, y = c;
        while(ans.size() < size){
            for(int j=1;j<=len;j++){
                if(isValid(x,y+j,rows,cols)){
                    ans.push_back({x,y+j});
                }
            }
            y += len;
            for(int j=1;j<=len;j++){
                if(isValid(x+j,y,rows,cols)){
                    ans.push_back({x+j,y});
                }
            }
            x += len;
            len++;
            for(int j=1;j<=len;j++){
                if(isValid(x,y-j,rows,cols)){
                    ans.push_back({x,y-j});
                }
            }
            y -= len;
            for(int j=1;j<=len;j++){
                if(isValid(x-j,y,rows,cols)){
                    ans.push_back({x-j,y});
                }
            }
            x -= len;
            len++;
        }
        return ans;
    }
};