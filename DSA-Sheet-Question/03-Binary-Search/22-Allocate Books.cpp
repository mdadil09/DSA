#include<bits/stdc++.h>
using namespace std;

int help(vector<int>& arr,int pages){
    int student = 1;
    long long pagesStudent = 0;
    for(int i=0;i<arr.size();i++){
        if(pagesStudent+arr[i] <= pages){
            pagesStudent += arr[i];
        } else {
            student += 1;
            pagesStudent = arr[i];
        }
    }
    return student;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m > arr.size()) return -1;
    int maxi = *max_element(arr.begin(),arr.end());
    int sum = accumulate(arr.begin(),arr.end(),0);
    int low = maxi, high = sum;
    while(low<=high){
        int mid = (low+high)/2;
        if(help(arr,mid) > m){
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return low;
}