#include<bits/stdc++.h>
using namespace std;

//Brute force: 
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	int n = arr.size();
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		int start = arr[i][0];
		int end = arr[i][1];

		if(!ans.empty() && end <= ans.back()[1]) continue;

		for(int j=i+1;j<n;j++){
			if(arr[j][0] <= end){
				end = max(end,arr[j][1]);
			} else {
				break;
			}
		}
		ans.push_back({start,end});
	}
	return ans;
}

//optimal:

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	int n = arr.size();
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){

		if(ans.empty() || arr[i][0] > ans.back()[1]){
			ans.push_back(arr[i]);
		} else {
			ans.back()[1] = max(ans.back()[1],arr[i][1]);
		}
	}
	return ans;
}