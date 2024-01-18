class Solution
{
public:
    int climbStairs(int n)
    {
        int x = 1, y = 2;
        if (n <= 2)
            return n;
        for (int i = 3; i < n; i++)
        {
            int tmp = y;
            y += x;
            x = tmp;
        }
        return (x + y);
    }
};