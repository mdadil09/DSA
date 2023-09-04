#include<bits/stdc++.h>
using namespace std;

//method 1

int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n = arr.size();
	int low = 0, high = n-1;
	int res = n;
	while(low <= high){
		int mid = low + (high-low)/2;
		if(arr[mid] >= m){
			res = mid;
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return res;
}

//method 2

int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	return lower_bound(arr.begin(),arr.end(),m)-arr.begin();
}