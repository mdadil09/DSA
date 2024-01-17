// pattern-14

// A
// A B
// A B C

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void nLetterTriangle(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (char j = 'A'; j <= 'A' + i; j++)
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
        ob.nLetterTriangle(n);
    }
    return 0;
}
