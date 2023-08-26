#include<bits/stdc++.h>
using namespace std;

//Brute force:

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n = a.size();
    int res = 0;
    for(int i=0;i<n;i++){
        int x = 0;
        for(int j=i;j<n;j++){
            x ^= a[j];
            if(x == b) res++;
        }
    }
    return res;
}

//optimal approach:

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n = a.size();
    int res = 0;
    int x = 0;
    map<int,int> mp;
    mp[x]++;
    for(int i=0;i<n;i++){
        x ^= a[i];
        int y = x^b;
        res += mp[y];
        mp[x]++;
    }
    return res;
}