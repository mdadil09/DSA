class Solution
{
public:
    int minimumArrayLength(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int el = nums[0], ct = 0;
        int min_val = el;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == el)
                ct++;
            if (nums[i] % el != 0)
                min_val = min(min_val, nums[i] % el);
        }
        if (min_val != el || ct == 1)
        {
            return 1;
        }
        else
        {
            return (ct + 1) / 2;
        }
    }
};