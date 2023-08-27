#include<bits/stdc++.h>
using namespace std;

//Brute force:

int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]) count++;
        }
    }
    return count;
}

//optimal approach

int merge(vector<int>&a,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    int cnt = 0;
    while(left <= mid && right <= high){
        if(a[left] <= a[right]){
            temp.push_back(a[left]);
            left++;
        } else {
            temp.push_back(a[right]);
            cnt += mid - left + 1;
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i] = temp[i-low];
    }
    return cnt;
}

int mergeSort(vector<int>&a,int low,int high){
    int cnt = 0;
    if(low >= high) return cnt;
    int mid = (low+high)/2;
    cnt += mergeSort(a,low,mid);
    cnt += mergeSort(a,mid+1,high);
    cnt += merge(a,low,mid,high);
    return cnt;
}

int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    return mergeSort(a,0,n-1);
}