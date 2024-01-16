// pattern-21

// ***
// * *
// ***

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void getStarPattern(int n)
    {
        // Write your code here.
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
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
        ob.getStarPattern(n);
    }
    return 0;
}
