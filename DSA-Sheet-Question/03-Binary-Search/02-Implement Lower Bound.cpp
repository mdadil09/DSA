#include<bits/stdc++.h>
using namespace std;

//Method 1 :

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0, high = n-1;
	int ans = n;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid] >= x){
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return ans;
}

//Method 2: C++ STL Method;

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int ans = 0;
	ans = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
	return ans;
}
