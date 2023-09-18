#include<bits/stdc++.h>
using namespace std;

bool searchElement(vector<vector<int>> &MATRIX, int target) {
    // Write your code here.
    int n = MATRIX.size(), m = MATRIX[0].size();
    int low = 0, high = (n*m)-1;
    while(low<=high){
        int mid = (low+high)/2;
        int row = mid/m, col = mid%m;
        if(MATRIX[row][col] == target) return true;
        else if(MATRIX[row][col] < target) low = mid+1;
        else high = mid-1;
    }
    return false;
}