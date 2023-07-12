class Solution {
public:
    int isOk(int i,int j,string &s){
        int val = 1, res = 0;
        for(int k=j;k>=i;k--){
            if(s[k] == '1'){
                res += val;
            }
            val = val*2;
        }
        while(res > 1){
            if(res%5 == 0) res = res/5;
            else return 0;
        }
        return 1;
    }
    int help(string &s,int i){
        if(s[i] == '0') return 1000;
        if(i == s.length()) return 0;
        int res = INT_MAX;
        for(int j=i;j<s.length();j++){
            if(isOk(i,j,s)){
                res = min(res,1 + help(s,j+1));
            }
        }
        return res;
    }
    int minimumBeautifulSubstrings(string s) {
        int res = help(s,0);
        return res < 20 ? res : -1;        
    }
};