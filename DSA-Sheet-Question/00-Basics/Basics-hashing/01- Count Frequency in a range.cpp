#include <bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    // Write your code here.
    unordered_map<int, int> mp;
    vector<int> res(n, 0);
    for (int i = 0; i < n; i++)
    {
        mp[nums[i] - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        res[i] = mp[i];
    }
    return res;
}