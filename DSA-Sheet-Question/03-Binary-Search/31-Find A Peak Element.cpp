#include<bits/stdc++.h>
using namespace std;

int help(vector<vector<int>> &g, int x){
    int row = x;
    int col = g[0].size();
    int index = -1;
    int sum = 0;
    for(int i=0;i<col;i++){
        if(g[row][i] > sum){
            sum = max(sum,g[x][i]);
            index = i;
        }
    }
    return index;
}

vector<int> findPeakGrid(vector<vector<int>> &g){
    // Write your code here.
    int n = g.size(), m= g[0].size();
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int peak = help(g,mid);
        bool l = true, r = true, t = true, b = true;
        if(mid>0){
            if(g[mid][peak] < g[mid-1][peak]) t = false;
        }
        if(mid<m-1){
            if(g[mid][peak] < g[mid][peak+1]) r = false;
        }
        if(peak > 0){
            if(g[mid][peak] < g[mid][peak-1]) l = false; 
        }
        if(mid < n-1){
            if(g[mid][peak] < g[mid+1][peak]) b = false;
        }
        if(l && r && t && b) return {mid,peak};
        else if(g[mid][peak] < g[mid+1][peak]) low = mid+1;
        else high = mid-1;
    }
    return {-1,-1};
}