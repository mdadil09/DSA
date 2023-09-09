class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int res = 0;
        int left = 0, count = 0;
        for(int i=0;i<n;i++){
            if(answerKey[i] == 'T') count++;
            while(count > k){
                if(answerKey[left] == 'T') count--;
                left++;
            }
            res = max(res,i-left+1);
        }
        left = 0,count = 0;
        for(int i=0;i<n;i++){
            if(answerKey[i] == 'F') count++;
            while(count > k){
                if(answerKey[left] == 'F') count--;
                left++;
            }
            res = max(res,i-left+1);
        }
        return res;
    }
};