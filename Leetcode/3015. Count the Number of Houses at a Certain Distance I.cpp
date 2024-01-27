class Solution
{
public:
    vector<int> countOfPairs(int n, int x, int y)
    {
        vector<vector<int>> gr(n + 1, vector<int>(n + 1, 1e9));
        for (int i = 2; i <= n; i++)
        {
            int j = i - 1;
            gr[i][i] = 0;
            gr[j][j] = 0;
            gr[i][j] = 1;
            gr[j][i] = 1;
        }
        if (x != y)
        {
            gr[x][y] = 1;
            gr[y][x] = 1;
        }
        for (int k = 1; k <= n; k++)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    gr[i][j] = min(gr[i][j], gr[i][k] + gr[k][j]);
                }
            }
        }
        unordered_map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                mp[gr[i][j]]++;
            }
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = mp[i + 1];
        }
        return ans;
    }
};