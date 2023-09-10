#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>& arr,int day, int k, int m){
	int bloom = 0, cnt = 0;
	for(int i=0;i<arr.size();i++){
		if(arr[i] <= day){
			cnt++;
		} else {
			bloom += (cnt/k);
			cnt = 0;
		}
	}
	bloom += (cnt/k);
	return bloom >= m;
}

int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	int mini = *min_element(arr.begin(),arr.end());
	int maxi = *max_element(arr.begin(),arr.end());
	int low = mini,high = maxi;
	int res = -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(fun(arr,mid,k,m)){
			res = mid;
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return res;
}