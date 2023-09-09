class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even = 0, odd = 0;
        int n = position.size();
        for(int i=0;i<n;i++){
            if(position[i]%2 == 0) even++;
            else odd++;
        }
        if(even > odd) return odd;
        return even;
    }
};