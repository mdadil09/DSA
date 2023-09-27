#include<bits/stdc++.h>
using namespace std;

string revWords(string str) {
    // Write your code here.
    string result;
    int i = 0;
    int n = str.length();
    while(i<n){
        while(i<n && str[i] == ' ') i++;
        if(i >= n) break;
        int j = i+1;
        while(j<n && str[j] != ' ') j++;
        string sub = str.substr(i,j-i);
        if(result.length() == 0) result = sub;
        else result = sub + " " + result;
        i = j+1;
    }
    return result;
}