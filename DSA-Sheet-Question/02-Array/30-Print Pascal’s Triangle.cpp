#include<bits/stdc++.h>
using namespace std;

//1st method:

vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> res(N);
    for(int i=0;i<N;i++){
        res[i].resize(i+1);
        res[i][0] = res[i][i] = 1;
        for(int j=1;j<i;j++){
            res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
    }
    return res;
}

//2nd method:

int help(int n,int r){
    long long res = 1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return (int)res;
}

vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> res;
    for(int i=1;i<=N;i++){
        vector<int> temp;
        for(int j=1;j<=i;j++){
            temp.push_back(help(i-1,j-1));
        }
        res.push_back(temp);
    }
    return res;
}