#include <bits/stdc++.h>
using namespace std;

//Brute force:

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> a1,a2;
    for(int i=0;i<a.size();i++){
        if(a[i] > 0){
            a1.push_back(a[i]);
        }
        else{
            a2.push_back(a[i]);
        }
    }
    for(int i=0;i<a.size()/2;i++){
        a[2*i] = a1[i];
        a[2*i+1] = a2[i];
    }
    return a;
}

// optima:

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> ans(a.size(),0);
    int start = 0, next = start + 1;
    for(int i=0;i<a.size();i++){
       if(a[i] > 0){
           ans[start] = a[i];
           start+=2;
       }else{
           ans[next] = a[i];
           next += 2;
       }
    }
    return ans;
}