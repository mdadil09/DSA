#include<bits/stdc++.h>
using namespace std;

string sortByFrequency(int n, string& s)
{
	// Write Your Code here
	string ans = "";
	unordered_map<char,int>mp;
	for(auto a : s){
		mp[a]++;
	}
	priority_queue<pair<int,char>> q;
	for(auto it : mp){
		q.push({it.second,it.first});
	}
	pair<int,char> curr;
	while(!q.empty()){
		curr = q.top();
		q.pop();
		ans += string(curr.first,curr.second);
	}
	return ans;
}
