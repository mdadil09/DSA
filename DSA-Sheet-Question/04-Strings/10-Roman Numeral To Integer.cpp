#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    // Write your code here
    unordered_map<char,int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    int ans = 0;
    int n = s.length();
    for(int i=n-1;i>=0;i--){
        if(i == n-1){
            ans += mp[s[i]];
        } else {
            if(mp[s[i+1]] > mp[s[i]]){
                ans -= mp[s[i]];
            } else {
                ans += mp[s[i]];
            }
        }
    }
    return ans;
}