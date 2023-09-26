#include<bits/stdc++.h>
using namespace std;

int countSubStrings(string str, int k) 
{
    // Write your code here.
    int ans = 0;
    for(int i=0,j=k-1;i<str.size();i++,j++){
        vector<int> v(26,0);
        int count = 0;
        for(int l=i;l<str.size();l++){
            if(v[str[l]-'a'] == 0) count++;
            v[str[l]-'a']++;
            if(count == k) ans++;
            else if(count > k) break;
        }
    }
    return ans;
}
