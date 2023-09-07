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