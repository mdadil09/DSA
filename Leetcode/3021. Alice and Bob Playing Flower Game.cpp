#define ll long long
class Solution
{
public:
    long long flowerGame(int n, int m)
    {
        ll evenX = n / 2;
        ll oddX = (n + 1) / 2;
        ll evenY = m / 2;
        ll oddY = (m + 1) / 2;

        return (evenX * oddY) + (oddX * evenY);
    }
};

// 2nd Method

#define ll long long
class Solution
{
public:
    long long flowerGame(long long n, long long m)
    {
        return (m * n) / 2;
    }
};