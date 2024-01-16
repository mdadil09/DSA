// pattern-19

// * * * * * *
// * *   * *
// *     *
// *     *
// * *   * *
// * * * * * *

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void symmetry(int n)
    {
        // Write your code here.
        int start = n, end = n + 1;
        for (int i = 1; i <= 2 * n; i++)
        {
            for (int j = 1; j <= 2 * n; j++)
            {
                if (j > start && j < end)
                {
                    cout << " ";
                }
                else
                {
                    cout << "* ";
                }
            }
            if (i < n)
            {
                start--;
                end++;
            }
            else if (i == n)
            {
                start = start;
                end = end;
            }
            else if (i > n)
            {
                start++;
                end--;
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
        ob.symmetry(n);
    }
    return 0;
}
