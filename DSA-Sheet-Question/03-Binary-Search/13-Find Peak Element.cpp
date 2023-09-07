#include<bits/stdc++.h>
using namespace std;

//Linear Search: O(n) partially accepted

int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n = arr.size();
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) res = i;
    }
    return res;
}

//Binary Search: O(log n)

int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n = arr.size();
    if(n == 1) return 0;
    if(arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;
    int low = 1, high = n-2;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(arr[mid] > arr[mid-1]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}
