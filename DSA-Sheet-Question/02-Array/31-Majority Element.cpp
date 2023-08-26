#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	int x = floor(n/3);
	vector<int> res;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[v[i]]++;
	}
	for(auto m : mp){
		if(m.second > x) res.push_back(m.first);
	}
	sort(res.begin(),res.end());
	return res;
}