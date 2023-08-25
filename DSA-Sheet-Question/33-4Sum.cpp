#include<bits/stdc++.h>
using namespace std;

//Brute force: O(n^4)

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    long long sum = nums[i]+nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    for(auto a : st){
        ans.push_back(a);
    }
    return ans;
}

//Better Approach:


vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<long long> s;
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                long long sum = nums[i]+nums[j];
                sum += nums[k];
                int fourth = target - sum;
                if(s.find(fourth) != s.end()){
                    vector<int> temp = {nums[i],nums[j],nums[k],fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                s.insert(nums[k]);
            }
        }
    }
    for(auto a : st){
        ans.push_back(a);
    }
    return ans;
}


//optimal Approach:

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j > i+1 && nums[j] == nums[j-1]) continue;

            int k = j+1;
            int l = n-1;
            while(k < l){
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum == target){
                    vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                    sort(temp.begin(),temp.end());
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && nums[k] == nums[k-1]) k++;
                    while(k<l && nums[l] == nums[l+1]) l--;
                } else if(sum < target){
                    k++;
                } else {
                    l--;
                }
            }
        }
    }
    return ans;
}
