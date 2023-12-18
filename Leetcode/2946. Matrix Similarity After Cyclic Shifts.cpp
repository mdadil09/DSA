class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        for(const auto &m : mat){
            int n = m.size();
            for(int i=0;i<n;i++){
                if(m[i] != m[(i+k)%n]) return false;
            }
        }
        return true;
    }
};