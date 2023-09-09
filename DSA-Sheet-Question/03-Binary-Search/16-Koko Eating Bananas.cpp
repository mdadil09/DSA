#include<bits/stdc++.h>
using namespace std;


int findMax(vector<int>& v){
    int n = v.size();
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,v[i]);
    }
    return maxi;
}

bool calculateTime(vector<int>& piles,int hours,int currK){
    long long count = 0;
    for(int pile : piles){
        int div = pile/currK;
        count += div;
        if(pile%currK != 0) count++;
    }
    return (count<=hours);
}

int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int low = 1, high = findMax(v);
    int ans = INT_MAX;
    while(low <= high){
        int mid = low + (high - low)/2;
        bool total = calculateTime(v,h,mid);
        if(total){
            ans = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return ans;
}