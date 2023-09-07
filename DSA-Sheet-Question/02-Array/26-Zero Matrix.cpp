#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int col = 1;
	for(int i=0;i<n;i++){
		if(matrix[i][0] == 0) col = 0;
		for(int j=1;j<m;j++){
			if(matrix[i][j] == 0){
				matrix[i][0] = matrix[0][j] = 0;
			}
		}
	}
	for(int i=n-1;i>=0;i--){
		for(int j=m-1;j>=1;j--){
			if(matrix[i][0] == 0 || matrix[0][j] == 0){
				matrix[i][j] = 0;
			}
		}
		if(col == 0) matrix[i][0] = 0;
	}
	return matrix;
}