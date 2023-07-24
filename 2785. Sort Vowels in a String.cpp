#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char s){
        return (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U' || s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' );
    }
    string sortVowels(string s) {
        vector<int> v;
        vector<int> p;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                v.push_back(s[i]);
                p.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        string res = s;
        for(int i=0;i<p.size();i++){
            res[p[i]] = v[i]; 
        }
        return res;
    }
};