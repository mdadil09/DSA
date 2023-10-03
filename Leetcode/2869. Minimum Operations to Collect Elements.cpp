//1st method:

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }
        vector<int> index;
        for(auto i : mp){
            if(i.first <= k) index.push_back(i.second);
        }
        sort(index.begin(),index.end());
        res = abs((index[0] - n)+1)+1;
        return res;
    }
};

//2nd method:

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int res = n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }
        for(auto i : mp){
            if(i.first <= k) res = min(res,i.second);
        }
        return n-res;
    }
};