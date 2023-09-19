#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
	// Write your code here.
	int n = s.size();
	int count = 0;
	int ans = INT_MIN;
	for(int i=0;i<n;i++){
		if(s[i] == '(') count++;
		else if(s[i] == ')') count--;
		ans = max(ans,count);
	}
	return ans;
}
