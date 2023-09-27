#include<bits/stdc++.h>
using namespace std;

int sumOfBeauty(string s) {
	// Write your code here.
	int ans = 0;
	for(int i=0;i<s.size();i++){
		map<char,int> mp;
		for(int j=i;j<s.size();j++){
			mp[s[j]]++;
			int l = INT_MAX, h = 0;
			for(auto a : mp){
				l = min(l,a.second);
				h = max(h,a.second);
			}
			ans += (h-l); 
		}
	}
	return ans;
}
