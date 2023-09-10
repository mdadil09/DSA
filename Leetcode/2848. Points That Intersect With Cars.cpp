class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int res = 0;
        vector<int> v(102,0);
        for(auto num : nums){
            v[num[0]]++;
            v[num[1]+1]--;
        }
        int sum = 0;
        for(int i=1;i<=100;i++){
            sum += v[i];
            if(sum) res++;
        }
        return res;
    }
};