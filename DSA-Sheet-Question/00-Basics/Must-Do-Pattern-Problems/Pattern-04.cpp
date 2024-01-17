// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        // code here
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i << " ";
            }
            cout << "\n";
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
        ob.printTriangle(n);
    }
    return 0;
}
