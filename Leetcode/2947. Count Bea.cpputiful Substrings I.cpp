class Solution {
public:
    bool isVowel(char a){
        string s = "aeiou";
        if(s.find(a) != string::npos) return false;
        return true;
    }
    int beautifulSubstrings(string s, int k) {
       int ans = 0, n = s.size();
       for(int i=0;i<n;i++){
           int cntVowel = 0, cntCons = 0;
           for(int j=i;j<n;j++){
               if(isVowel(s[j])){
                   cntVowel++;
               } else {
                   cntCons++;
               }
                if(cntVowel == cntCons && (cntVowel*cntCons)%k == 0){
                    ans++;
                }
           }
       } 
       return ans;
    }
};