// pattern-15

// A B C
// A B
// A

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void nLetterTriangle(int n)
    {
        for (int i = n - 1; i >= 0; i--)
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
