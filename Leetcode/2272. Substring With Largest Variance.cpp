class Solution {
public:
    int largestVariance(string s) {
        int n = s.size();
        int res = 0;
        for(char i='a';i<='z';i++){
            for(char j = 'a';j<='z';j++){
                if(i == j) continue;
                int i_cnt = 0;
                int j_cnt = 0;
                bool flag = false;
                for(auto k : s){
                    if(k == i) i_cnt++;
                    if(k == j) j_cnt++;
                    if(j_cnt > 0){
                        res = max(res,i_cnt - j_cnt);
                    } else if(j_cnt == 0 && flag){
                        res = max(res,i_cnt - 1);
                    }
                    if(j_cnt > i_cnt){
                        j_cnt = i_cnt = 0;

                        flag = true;
                    }
                }
            }
        }
        return res;
    }
};