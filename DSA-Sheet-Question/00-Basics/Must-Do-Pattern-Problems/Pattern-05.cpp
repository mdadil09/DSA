// * * * * *
// * * * *
// * * *
// * *
// *

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        // code here
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*"
                     << " ";
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
