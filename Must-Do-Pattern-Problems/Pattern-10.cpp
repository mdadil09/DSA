// *
// * *
// * * *
// * * * *
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
        for (int i = 1; i <= 2 * n - 1; i++)
        {
            int star = i;
            if (i > n)
                star = 2 * n - i;
            for (int j = 1; j <= star; j++)
            {
                cout << "*"
                     << " ";
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
        ob.printTriangle(n);
    }
    return 0;
}
