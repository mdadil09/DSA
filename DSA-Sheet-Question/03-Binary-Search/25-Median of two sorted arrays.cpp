#include<bits/stdc++.h>
using namespace std;

//Brute force:

double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	vector<int> arr;
	for(int i=0;i<a.size();i++){
		arr.push_back(a[i]);
	}
	for(int i=0;i<b.size();i++){
		arr.push_back(b[i]);
	}
	double ans = 0.0;
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++){
		if(arr.size()%2 == 0){
			ans = ((double)(arr[arr.size()/2.0 - 1]) + (double)(arr[arr.size()/2.0])) / 2.0;
		}else{
			ans = (double)(arr[arr.size()/2]);
		}
	}
}

//optimal:

double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	int n1 = a.size(), n2 = b.size();
	if(n1>n2) return median(b,a);
	int low = 0, high = n1;
	int left = (n1+n2+1)/2;
	int n = n1+n2;
	while(low<=high){
		int mid1 = (low+high) >> 1;
		int mid2 = left - mid1;
		int l1 = INT_MIN, l2 = INT_MIN;
		int r1 = INT_MAX, r2 = INT_MAX;
		if(mid1 < n1) r1 = a[mid1];
		if(mid2 < n2) r2 = b[mid2];
		if(mid1-1 >= 0) l1 = a[mid1-1];
		if(mid2-1 >= 0) l2 = b[mid2-1];
		if(l1 <= r2 && l2 <= r1){
			if(n%2 == 1) return max(l1,l2);
			return ((double)(max(l1,l2)+min(r1,r2)))/2.0;
		} else if(l1 > r2) high = mid1-1;
		else low = mid1+1;
	}
	return 0;
}