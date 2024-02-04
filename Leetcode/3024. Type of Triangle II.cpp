class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        int sum1 = nums[0] + nums[1];
        int sum2 = nums[0] + nums[2];
        int sum3 = nums[1] + nums[2];
        if (sum1 < nums[2] && sum2 < nums[1] && sum3 < nums[0])
            return "none";
        if ((sum1 > nums[2] && sum2 > nums[1] && sum3 > nums[0]) && (nums[0] == nums[1] && nums[1] == nums[2]))
            return "equilateral";
        else if ((sum1 > nums[2] && sum2 > nums[1] && sum3 > nums[0]) && (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]))
            return "isosceles";
        else if ((sum1 > nums[2] && sum2 > nums[1] && sum3 > nums[0]) && (nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[3]))
            return "scalene";
        return "none";
    }
};