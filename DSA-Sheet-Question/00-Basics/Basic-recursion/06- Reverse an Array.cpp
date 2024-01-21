#include <bits/stdc++.h>
using namespace std;

void help(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        help(arr, start + 1, end - 1);
    }
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    help(nums, 0, n - 1);
    return nums;
}
