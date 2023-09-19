#include<bits/stdc++.h>
using namespace std;

//Brute Force:

int median(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    vector<int> arr;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr.push_back(matrix[i][j]);
        }
    }
    sort(arr.begin(),arr.end());
    int res = 0;
    for(int i=0;i<arr.size();i++){
        if(arr.size()%2 == 0){
            res = ((arr[arr.size()]/2 - 1) + (arr[arr.size()]/2))/2;
        } else {
            res = arr[arr.size()/2];
        }
    }
    return res;
}


//Binary Search:

int help(vector<int>& row,int mid){
    int l = 0, h = row.size()-1;
    while(l<=h){
        int md = (l+h)/2;
        if(row[md] <= mid) l = md+1;
        else h = md-1;
    }
    return l;
}

int median(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    int low = 1, high = 1e9;
    while(low<=high){
        int mid = (low+high)>>1;
        int cnt = 0;
        for(int i=0;i<m;i++){
            cnt += help(matrix[i],mid);
        }
        if(cnt <= (n*m)/2) low = mid+1;
        else high = mid-1;
    }
    return low;
}