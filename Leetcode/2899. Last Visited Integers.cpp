class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> nums;
        vector<int> result;
        int k = 0;
        for(auto word : words){
            if(word == "prev"){
                k++;
                if(k > nums.size()) result.push_back(-1);
                else result.push_back(nums[nums.size()-k]);
            } else {
                k = 0;
                nums.push_back(stoi(word));
            }
        }
        return result;
    }
};