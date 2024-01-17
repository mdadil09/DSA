#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        bool isNegative = x < 0;
        int ans = 0;
        x = abs(x);
        long long int lastDigits = 0;
        while (x != 0)
        {
            lastDigits = lastDigits * 10 + x % 10;
            x = x / 10;
            ans = lastDigits;
            if (ans < lastDigits || ans > lastDigits)
                return 0;
        }
        return isNegative ? -1 * ans : ans;
    }
};