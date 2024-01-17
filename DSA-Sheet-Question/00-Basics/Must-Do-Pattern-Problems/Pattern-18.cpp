// pattern-18

// C
// C B
// C B A

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void alphaTriangle(int n)
    {
        // Write your code here.
        for (int i = 0; i < n; i++)
        {
            for (char j = ('A' + n - 1); j >= ('A' + n - 1) - i; j--)
            {
                cout << j << " ";
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
        ob.alphaTriangle(n);
    }
    return 0;
}
