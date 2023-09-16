#include<bits/stdc++.h>
using namespace std;

//Linear Search:

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int maxi = -1, res = -1;
    for(int i=0;i<n;i++){
        int cntRow = 0;
        for(int j=0;j<m;j++){
            cntRow += matrix[i][j];
        }
        if(cntRow > maxi){
            maxi = cntRow;
            res = i;
        }
    }
    return res;
}

//Binary Search:

#include<bits/stdc++.h>

int lowerBound(vector<int>& arr,int n,int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int maxi = 0, res = -1;
    for(int i=0;i<n;i++){
        int cntRow = m-lowerBound(matrix[i],m,1);
        if(cntRow > maxi){
            maxi = cntRow;
            res = i;
        }
    }
    return res;
}