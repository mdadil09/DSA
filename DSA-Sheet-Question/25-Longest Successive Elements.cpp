#include<bits/stdc++.h>
using namespace std;

//Brute force

bool help(vector<int>& a,int num){
    int n = a.size();
    for(int i=0;i<n;i++){
        if(a[i] == num) return true;
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int res = 1;
    for(int i=0;i<a.size();i++){
        int x = a[i];
        int cnt = 1;
        while(help(a,x+1)){
            x += 1;
            cnt += 1;
        }
        res = max(res,cnt);
    }
    return res;
}

//Better Approach:


int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int res = 1;
    int n = a.size();
    int lastSmaller = INT_MIN;
    int cnt = 0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(lastSmaller == a[i]-1){
            cnt+=1;
            lastSmaller = a[i];
        } else if(lastSmaller != a[i]){
            cnt = 1;
            lastSmaller = a[i];
        }
        res = max(res,cnt);
    }
    return res;
}

//Optimal approach

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    int res = 1;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }

    for(auto it : s){
        if(s.find(it-1) == s.end()){
            int cnt = 1;
            int x = it;
            while(s.find(x+1) != s.end()){
                x = x + 1;
                cnt = cnt + 1;
            }
            res = max(res,cnt);
        }
    }
    return res;
}