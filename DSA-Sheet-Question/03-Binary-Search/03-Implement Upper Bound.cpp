#include<bits/stdc++.h>
using namespace std;

//method 1:

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int low = 0, high = n-1;
	int ans = n;
	while(low <= high){
		int mid = low + (high-low)/2;
		if(arr[mid] > x){
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}	
	return ans;
}

//method 2: using c++ stl;

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int ans = 0;
	ans = upper_bound(arr.begin(),arr.end(),x) - arr.begin();
	return ans;
}