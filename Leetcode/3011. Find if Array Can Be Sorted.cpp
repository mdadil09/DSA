class Solution
{
public:
    bool check(vector<int> &originalNums, vector<int> &sortedNums, int i, int j)
    {
        vector<int> temp1, temp2;
        for (int k = i; k <= j; k++)
        {
            temp1.push_back(originalNums[k]);
            temp2.push_back(sortedNums[k]);
        }

        sort(temp1.begin(), temp1.end());
        return temp1 == temp2;
    }
    bool canSortArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> setCount(n, 0);
        for (int i = 0; i < n; i++)
        {
            setCount[i] = __builtin_popcount(nums[i]);
        }
        vector<int> originalNums = nums;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (j + 1 < n && setCount[j + 1] == setCount[j])
                j++;
            if (j == n)
                j--;
            if (!check(originalNums, nums, i, j))
                return false;
            i = j;
        }
        return true;
    }
};