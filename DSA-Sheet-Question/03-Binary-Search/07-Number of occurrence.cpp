#include<bits/stdc++.h>
using namespace std;

//linear search O(n): Partially Accepted;

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == x) count++;
	}
	return count;
}

//Using map: partially Accepted

#include<bits/stdc++.h>

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int count = 0;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	for(auto i : mp){
		if(i.first == x) count = i.second;
	}
	return count;
}

//Binary Search: Optimal

#include<bits/stdc++.h>

int fun1(vector<int>& arr, int n, int x){
	int low = 0, high = n-1;
	int ans = n;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid] >= x){
			ans = mid;
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return ans;
}

int fun2(vector<int>& arr, int n, int x){
	int low = 0, high = n-1;
	int ans = n;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid] > x){
			ans = mid;
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int a = fun1(arr,n,k);
    if(a == n || arr[a] != k){
        return {-1,-1};
    }
    int b = fun2(arr,n,k)-1;
    return {a,b};
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	pair<int,int> p = firstAndLastPosition(arr,n,x);
	if(p.first == -1) return 0;
	return p.second - p.first + 1;
}

