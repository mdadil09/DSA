//Brute force:

class Solution {
public:
    int help(int n){
        int temp = 0;
        while(n > 0){
            temp = max(temp,n%10);
            n = n/10;
        }
        return temp;
    }
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1,sum = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(help(nums[i]) == help(nums[j])){
                    sum = nums[i]+nums[j];
                    maxi = max(maxi,sum);
                }
            }
        }
        return maxi;
    }
};

//Optimal: Using hashmap

class Solution {
public:
    int help(int n){
        int temp = 0;
        while(n > 0){
            temp = max(temp,n%10);
            n = n/10;
        }
        return temp;
    }
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1,sum = 0;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            int x = help(nums[i]);
            mp[x].push_back(nums[i]);
        }
        for(auto [i,j] : mp){
            sort(j.rbegin(),j.rend());
            if(j.size() >= 2){
                sum = j[0]+j[1];
                maxi = max(maxi,sum);
            }
        }
        return maxi;
    }
};