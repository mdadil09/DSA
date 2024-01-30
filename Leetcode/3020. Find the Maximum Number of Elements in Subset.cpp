#define ll long long int
class Solution
{
public:
    int maximumLength(vector<int> &nums)
    {
        int n = nums.size();
        map<ll, int> mp;
        int res = 0;
        for (int a : nums)
        {
            mp[a]++;
        }
        for (auto [el, freq] : mp)
        {
            ll x = el;
            int count = 0;
            while (mp.find(x) != mp.end() && mp[x])
            {
                if (x == 1)
                    count += mp[1];
                else if (mp[x] >= 2)
                    count += 2;
                else if (mp[x] == 1)
                {
                    count += 1;
                    break;
                }
                mp[x] = 0;
                if (x > 1e6)
                    break;
                x = x * x;
            }
            res = max(res, count - (count % 2 == 0));
        }
        return res;
    }
};