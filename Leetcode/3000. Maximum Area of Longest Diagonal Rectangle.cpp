class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0, maxDiagLen = 0;
        for(auto d : dimensions){
            int currDiagLen = d[0] * d[0] + d[1] * d[1];
            if(currDiagLen > maxDiagLen || (currDiagLen == maxDiagLen && maxArea < d[0] * d[1])){
                maxDiagLen = currDiagLen;
                maxArea = d[0] * d[1];
            }
        }
        return maxArea;
    }
};