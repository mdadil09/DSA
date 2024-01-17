// pattern-22

// 33333
// 32223
// 32123
// 32223
// 33333

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void getNumberPattern(int n)
    {
        for (int i = 0; i < 2 * n - 1; i++)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                int top = i;
                int bottom = j;
                int left = (2 * n - 2) - i;
                int right = (2 * n - 2) - j;
                cout << (n - min(min(top, bottom), min(left, right)));
            }
            cout << endl;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        Solution ob;
        ob.getNumberPattern(n);
    }
    return 0;
}
