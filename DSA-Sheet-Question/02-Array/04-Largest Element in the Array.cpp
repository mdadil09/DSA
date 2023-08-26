#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxi = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > maxi) maxi = arr[i];
    }
    return maxi;
}
