#include<bits/stdc++.h>
using namespace std;

//Brute force: O(n^2)

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int res = 0;
	for(int i=0;i<n;i++){
		int sum = 0;
		for(int j=i;j<n;j++){
			sum += arr[j];
			if(sum == 0){
				res = max(res,j-i+1);
			}
		}
	}
	return res;
}

//optimal:

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int res = 0;
	int sum = 0;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		sum += arr[i];
		if(sum == 0){
			res = i+1;
		} else {
			if(mp.find(sum) != mp.end()){
				res = max(res,i-mp[sum]);
			} else {
				mp[sum] = i; 
			}
		}
	}
	return res;
}

