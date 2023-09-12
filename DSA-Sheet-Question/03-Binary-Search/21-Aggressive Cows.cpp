#include<bits/stdc++.h>
using namespace std;

bool help(vector<int>& stalls,int dist,int cows){
    int cnt = 1, last = stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i] - last >= dist){
            cnt++;
            last = stalls[i];
        }
        if(cnt >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());
    int low = 1,high = stalls[n-1] - stalls[0];
    while(low<=high){
        int mid = (low+high)/2;
        if(help(stalls,mid,k) == true){
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return high;
}