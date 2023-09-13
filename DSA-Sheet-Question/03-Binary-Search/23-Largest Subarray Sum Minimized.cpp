#include<bits/stdc++.h>
using namespace std;

int help(vector<int>& arr,int pages){
    int student = 1;
    long long pageStudent = 0;
    for(int i=0;i<arr.size();i++){
        if(pageStudent + arr[i] <= pages){
            pageStudent += arr[i];
        } else {
            student += 1;
            pageStudent = arr[i];
        }
    }
    return student;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
    // Write Your Code Here
    if(k > a.size()) return -1;
    int maxi = *max_element(a.begin(),a.end());
    int sum = accumulate(a.begin(),a.end(),0);
    int low = maxi, high = sum;
    while(low<=high){
        int mid = (low+high)/2;
        if(help(a,mid) > k) low = mid+1;
        else high = mid-1;
    }
    return low;
}