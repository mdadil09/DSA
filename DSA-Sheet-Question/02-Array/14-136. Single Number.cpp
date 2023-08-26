//1st method: Using unordered_map

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int n : nums){
            mp[n]++;
        }
        for(auto m : mp){
            if(m.second == 1) return m.first;
        }
        return 0;
    }
};

//2nd method

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(auto a : nums) ans = ans^a;
        return ans;
    }
};