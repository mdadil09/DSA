#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	int n = mat.size(),m=mat[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(mat[j][i],mat[i][j]);
		}
	}
	for(int i=0;i<n;i++) reverse(mat[i].begin(),mat[i].end());
}