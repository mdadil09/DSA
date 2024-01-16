// pattern-16

// A
// B B
// C C C

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void alphaRamp(int n)
    {
        // Write your code here.
        for (int i = 0; i < n; i++)
        {
            char ch = 'A' + i;
            for (int j = 0; j <= i; j++)
            {
                cout << ch << " ";
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
        ob.alphaRamp(n);
    }
    return 0;
}
