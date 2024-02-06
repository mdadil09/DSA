// Brute Force: TC: O(n^3) , SC: O(1)

class Solution
{
public:
    int numberOfPairs(vector<vector<int>> &points)
    {
        int n = points.size(), ans = 0;
        for (int i = 0; i < n; i++)
        {
            int cx = points[i][0], cy = points[i][1];
            for (int j = 0; j < n; j++)
            {
                int tx = points[j][0], ty = points[j][1];
                if (i == j || ty > cy || cx > tx)
                    continue;

                bool flag = true;
                for (int k = 0; k < n; k++)
                {
                    if (k == i || k == j)
                        continue;
                    if (points[k][0] <= tx && points[k][0] >= cx && points[k][1] >= ty && points[k][1] <= cy)
                    {
                        flag = false;
                    }
                }
                if (flag)
                    ans++;
            }
        }
        return ans;
    }
};

// optimal solution: TC: O(n^2), SC: O(logn)

class Solution
{
public:
    int numberOfPairs(vector<vector<int>> &points)
    {
        int n = points.size(), ans = 0;
        auto cmp = [&](vector<int> &c, vector<int> &t)
        {
            if (c[0] == t[0])
                return c[1] > t[1];
            return c[0] < t[0];
        };
        sort(points.begin(), points.end(), cmp);
        for (int i = 0; i < n; i++)
        {
            int cx = points[i][0], cy = points[i][1];
            int k = -10000000000;
            for (int j = i + 1; j < n; j++)
            {
                int tx = points[j][0], ty = points[j][1];
                if (ty > cy)
                    continue;
                if (ty > k)
                {
                    ans++;
                    k = ty;
                }
            }
        }
        return ans;
    }
};