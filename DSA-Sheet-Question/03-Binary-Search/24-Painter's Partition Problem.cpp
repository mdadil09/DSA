#include<bits/stdc++.h>
using namespace std;

int help(vector<int>& arr,int pages){
    int painter = 1;
    long long paintsBoard = 0;
    for(int i=0;i<arr.size();i++){
        if(paintsBoard + arr[i] <= pages){
            paintsBoard += arr[i];
        } else {
            painter += 1;
            paintsBoard = arr[i];
        }
    }
    return painter;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    if(k > boards.size()) return -1;
    int maxi = *max_element(boards.begin(),boards.end());
    int sum = accumulate(boards.begin(),boards.end(),0);
    int low = maxi, high = sum;
    while(low<=high){
        int mid = (low+high)/2;
        if(help(boards,mid) > k) low = mid+1;
        else high = mid-1;
    }
    return low;
}