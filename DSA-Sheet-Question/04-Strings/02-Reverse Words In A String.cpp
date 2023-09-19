#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
	// Write your code here.
	int n = str.size();
	vector<string> temp;
	string ch = "";
	for(int i=0;i<n;i++){
		if(str[i]==' '){
			if(ch.size()>0) temp.push_back(ch);
			ch = "";
		} else{
			ch += str[i];
		}
	}
	if(ch.size()>0) temp.push_back(ch);
	str = "";
	for(int i=temp.size()-1;i>=0;i--){
		str += temp[i];
		str += " ";
	}	
	return str;
}