#include<string.h>
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        unordered_map<string,int> mp;
        for(auto a : words){
             string b = a;
             reverse(b.begin(),b.end());
             if(mp[b] > 0) {
                 count++;
                 mp[b]--;
             } else {
                 mp[a]++;
             }
        }
        return count;
    }
};