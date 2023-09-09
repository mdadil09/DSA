class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size();
        string a = "";
        for(auto w : words){
            a += w[0];
        }
        return a == s;
    }
};