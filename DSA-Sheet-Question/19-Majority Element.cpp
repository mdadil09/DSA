#include<bits/stdc++.h>
using namespace std;
//Brute force
int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	int x = floor(n/2);
	int res = 0;
	for(int i=0;i<n;i++){
		int count = 0;
		for(int j=0;j<n;j++){
			if(v[i] == v[j]) count++;
		}
		if(count > x) res = v[i];
	}
	return res;
}

//using map

int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	int x = floor(n/2);
	int res = 0;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[v[i]]++;
	}
	for(auto i : mp){
		if(i.second > x) return res = i.first;
	}
	return res;
}

//Optimal Approach

int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	int count = 0, ele = 0;
	for(int i=0;i<n;i++){
		if(count == 0) ele = v[i];
		if(ele == v[i]) count++;
		else count--;
	}
	return ele;
}