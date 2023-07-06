class Solution {
public:
    int help(int n, int &x){
        int y = 0;
        for(int i=1;i<=n/2;i++){
            if(n%i == 0){
                x += i;
                y++;
            }
            if(y > 4) break;
        }
        x += n;
        return y + 1;
    }
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int i=0;i<n;i++){
            int x = 0;
            if(help(nums[i],x) == 4) res += x;
        }
        return res;
    }
};