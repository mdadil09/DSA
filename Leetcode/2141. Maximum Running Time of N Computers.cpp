#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossible(vector<int>& batteries,long long t,int c){
        long long total = 0;
        for(long long b : batteries){
            if(b < t) total += b;
            else total += t;
        }
        return (total >= t*c);
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long low = 0, high = 0;
        for(int i=0;i<n;i++){
            high += batteries[i];
        }
        high = 1e14;
        long long res = 0;
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(isPossible(batteries,mid,n)){
                res = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return res;
    }
};