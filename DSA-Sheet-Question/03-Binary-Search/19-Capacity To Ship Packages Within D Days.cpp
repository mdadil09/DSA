#include<bits/stdc++.h>
using namespace std;

//Brute force:

int help(vector<int> &weights, int cap){
    int days = 1, load = 0;
    for(int i=0;i<weights.size();i++){
        if(load+weights[i] > cap){
            days += 1;
            load = weights[i];
        } else {
            load += weights[i];
        }
    }
    return days;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    // Write your code here.
    int maxi = *max_element(weights.begin(),weights.end());
    int sum = accumulate(weights.begin(),weights.end(),0);
    for(int i=maxi;i<=sum;i++){
        if(help(weights,i) <= d) return i;
    }
    return -1;
}

//Binary Search:


int help(vector<int> &weights, int cap){
    int days = 1, load = 0;
    for(int i=0;i<weights.size();i++){
        if(load+weights[i] > cap){
            days += 1;
            load = weights[i];
        } else {
            load += weights[i];
        }
    }
    return days;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    // Write your code here.
    int maxi = *max_element(weights.begin(),weights.end());
    int sum = accumulate(weights.begin(),weights.end(),0);
    int low = maxi, high = sum;
    while(low <= high){
        int mid = (low+high)/2;
        if(help(weights,mid) <= d){
            high = mid-1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}