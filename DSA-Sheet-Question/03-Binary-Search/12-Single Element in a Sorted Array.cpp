#include<bits/stdc++.h>
using namespace std;

//using map:

#include<bits/stdc++.h>

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n = arr.size();
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	for(auto i : mp){
		if(i.second == 1) return i.first;
	}
	return -1;
}

//By xor

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int ans = 0;
	for(int i=0;i<arr.size();i++){
		ans ^= arr[i];
	}
	return ans;
}

//Binary Search:

#include<bits/stdc++.h>

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n = arr.size();
	if(arr[0] != arr[1]) return arr[0];
	if(arr[n-1] != arr[n-2]) return arr[n-1];
	int low = 1, high = n-2;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
			return arr[mid];
		}
		if((mid%2 == 1 && arr[mid] == arr[mid-1]) || (mid%2 == 0 && arr[mid] == arr[mid+1])){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return -1;
}