#define ll long long int
#define MOD 1000000007

class Solution {
public:
    ll solve(ll a, ll b, ll m = MOD) {
        ll ans = 1;
        while (b > 0) {
            if (b % 2) {
                ans = (ans * a) % m;
                b--;
            } else {
                a = (a * a) % m;
                b = b / 2;
            }
        }
        return ans;
    }
    int stringCount(int n) {
        ll v1 = solve(26, n) % MOD;
        ll v2 = ((n + 75) * solve(25, n - 1)) % MOD;
        ll v3 = ((2 * n + 72) * solve(24, n - 1)) % MOD;
        ll v4 = ((n + 23) * solve(23, n - 1)) % MOD;

        ll ans = (v1 - v2 + v3 - v4 + 2 * MOD) % MOD;
        return (ans) % MOD;
    }
};