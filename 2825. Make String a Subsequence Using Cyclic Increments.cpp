#include<bits/stdc++.h>
using namespace std;

//two pointers;

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str1.size(), m = str2.size();
        int j = 0;
        for(int i=0;i<n;i++){
            if(str1[i] == str2[j] || str1[i]+1 == str2[j] || str1[i] - 25 == str2[j]) ++j;
        }
        return j == m;
    }
};