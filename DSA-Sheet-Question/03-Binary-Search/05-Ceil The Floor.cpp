#include<bits/stdc++.h>
using namespace std;

int fun1(int arr[],int n,int x){
	int low = 0, high = n-1;
	int res = -1;
	while(low <= high){
		int mid = low + (high-low)/2;
		if(arr[mid] <= x){
			res = arr[mid];
			low = mid+1;
		} else {
			high = mid-1;
		}
	}
	return res;
}

int fun2(int arr[],int n,int x){
	int low = 0, high = n-1;
	int res = -1;
	while(low <= high){
		int mid = low + (high-low)/2;
		if(arr[mid] >= x){
			res = arr[mid];
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return res;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	sort(arr,arr+n);
	int a = fun1(arr,n,x);
	int b = fun2(arr,n,x);

	return make_pair(a,b);
	
}
