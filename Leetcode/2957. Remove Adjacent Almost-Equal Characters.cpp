class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int n = word.size();
        int res = 0;
        for(int i=0;i<n;i++){
            int len = 1;
            while(i+1<n && abs(word[i+1]-word[i])<=1){
                len++;
                i++;
            }
            res += len/2;
        }
        return res;
    }
};