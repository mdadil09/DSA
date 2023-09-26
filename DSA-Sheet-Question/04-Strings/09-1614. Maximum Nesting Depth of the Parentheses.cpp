#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxi = 0, count = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                count++;
                maxi = max(maxi,count);
            }
            if(s[i] == ')'){
                count--;
            }
        }
        return maxi;
    }
};