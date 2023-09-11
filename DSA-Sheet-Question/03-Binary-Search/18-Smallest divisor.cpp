#include<bits/stdc++.h>
using namespace std;

//Linear Search: (Brute force)

int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int n = arr.size();
	int maxi = *max_element(arr.begin(),arr.end());
	for(int i=1;i<=maxi;i++){
		int sum = 0;
		for(int j=0;j<n;j++){
			sum += ceil((double)(arr[j])/(double)(i));
		}
		if(sum <= limit) return i;
	}
	return -1;
}

//Binary Search:

int help(vector<int>& arr,int x){
	int sum = 0;
	for(int i=0;i<arr.size();i++){
		sum += ceil((double)(arr[i])/(double)(x));
	}
	return sum;
}
int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	if(arr.size() > limit) return -1;
	int maxi = *max_element(arr.begin(),arr.end());
	int low = 1, high = maxi;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(help(arr,mid) <= limit){
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return low;
}