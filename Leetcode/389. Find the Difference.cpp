class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        char ans = 0;
        for(auto a : s){
            mp[a]++;
        }
        for(auto a : t){
            mp[a]++;
        }
        for(auto i : mp){
            if(i.second%2 != 0) ans = i.first;
        }
        return ans;
    }
};