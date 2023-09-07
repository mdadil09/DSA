#include<bits/stdc++.h>
using namespace std;

//Linear Search : O(n) -> partially accepted;

int findKRotation(vector<int> &arr){
    // Write your code here.
    int n = arr.size();
    int res = 0;
    int mini = INT_MAX;
    int index = 0;
    for(int i=0;i<n;i++){
        mini = min(mini,arr[i]);
        if(mini == arr[i]) index = i; 
    }
    return index;    
}

//Binary Search:


int findKRotation(vector<int> &arr){
    // Write your code here.
    int n = arr.size();
    int res = INT_MAX;
    int low = 0, high = n-1;
    int index = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low] <= arr[mid]){
            if(arr[low] < res){
                index = low;
                res = arr[low];
            }
            low = mid+1;
        } else {
            if(arr[mid] < res){
                index = mid;
                res = arr[mid];
            }
            high = mid-1;
        }
    }   
    return index;
}