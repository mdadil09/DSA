class Solution
{
public:
    int minimumCost(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;
        res = nums[0];
        int mini1 = INT_MAX, mini2 = INT_MAX, j = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < mini1)
            {
                mini1 = nums[i];
                j = i;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < mini2 && j != i)
            {
                mini2 = nums[i];
            }
        }
        return res + mini1 + mini2;
    }
};