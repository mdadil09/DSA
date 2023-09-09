class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string a = to_string(nums[i]);
                string b = to_string(nums[j]);
                int x = a[0] - '0';
                int y = b.back() - '0';
                int z = __gcd(x,y);
                if(z == 1) count++;
            }
        }
        return count;
    }
};