#include<bits/stdc++.h>
using namespace std;

//Brute force:

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int res = 0;
	for(int i=0;i<n;i++){
		int mul = 1;
		for(int j=i;j<n;j++){
			mul *= arr[j];
			res = max(res,mul);
		}
	}
	return res;
}

//Better Approach:

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int res = arr[0];
	for(int i=0;i<n;i++){
		int mul = arr[i];
		for(int j=i+1;j<n;j++){
			res = max(res,mul);
			mul *= arr[j];
		}
		res = max(res,mul);
	}
	return res;
}

//optimal 1 Approach:

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int res = INT_MIN;
	int pre = 1, suff = 1;
	for(int i=0;i<n;i++){
		if(pre == 0) pre = 1;
		if(suff == 0) suff = 1;
		pre *= arr[i];
		suff *= arr[n-i-1];
		res = max(res,max(pre,suff));
	}
	return res;
}

//optimal 2 Approach:

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int prod1 = arr[0],prod2 = arr[0],result = arr[0];
	for(int i=1;i<n;i++){
		int temp = max({arr[i],prod1*arr[i],prod2*arr[i]});
		prod2 = min({arr[i],prod1*arr[i],prod2*arr[i]});
		prod1 = temp;

		result = max(result,prod1);
	}
	return result;
}