#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    int n = MATRIX.size(), m = MATRIX[0].size();
    vector<int> res;
    int up=0,down = n-1,left = 0, right = m-1;
    while(up<=down && left<=right){
        for(int i=left;i<=right;i++)
            res.push_back(MATRIX[up][i]);

        up++;

        for(int i=up;i<=down;i++)
            res.push_back(MATRIX[i][right]);

        right--;

        if(up<=down){
            for(int i=right;i>=left;i--)
                res.push_back(MATRIX[down][i]);

            down--;
        }
        if(left<=right){
            for(int i=down;i>=up;i--)
                res.push_back(MATRIX[i][left]);

            left++;
        }
    }
    return res;
}

int main(){
    vector<vector<int>> mat   {{1, 3, 5, 7},
                             {10, 11, 16, 20},
		                     {23, 30, 34, 60}};
		                     
  vector<int> ans = spiralMatrix(mat);

  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  
  return 0;
}
