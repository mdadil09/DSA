class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        string temp;
        for (int i = 0; i < n; i++)
        {
            temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        for (auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};