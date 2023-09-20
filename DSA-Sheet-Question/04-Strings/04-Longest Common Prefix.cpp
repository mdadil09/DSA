#include<bits/stdc++.h>
using namespace std;

string commonPrefix(vector<string>& arr,int n){
	//Write your code here
	sort(arr.begin(),arr.end());
	string ans = "";
	string first = arr[0], last = arr[n-1];
	int x = min(first.size(),last.size());
	for(int i=0;i<x;i++){
		if(first[i] != last[i]){
			if(ans == "") return "-1";
			return ans;
		}
		ans += first[i];
	}
	return ans;
}
