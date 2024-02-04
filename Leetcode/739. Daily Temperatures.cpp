// Approach 1 - Using Stack - TC: O(N), SC: O(N)

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &t)
    {
        stack<pair<int, int>> st;
        vector<int> res(t.size(), 0);
        st.push({t[0], 0});
        for (int i = 1; i < t.size(); i++)
        {
            while (!st.empty() && st.top().first < t[i])
            {
                res[st.top().second] = i - st.top().second;
                st.pop();
            }
            st.push({t[i], i});
        }
        return res;
    }
};

// Approach - 2: TC: O(N), SC: O(1);

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        int hottest = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (temperatures[i] >= hottest)
            {
                hottest = temperatures[i];
                continue;
            }
            int days = 1;
            while (temperatures[i + days] <= temperatures[i])
            {
                days += ans[i + days];
            }
            ans[i] = days;
        }
        return ans;
    }
};