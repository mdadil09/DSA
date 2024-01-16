//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void help1(int n)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2 * i + 1; k++)
            {
                cout << "*";
            }
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }
    }
    void help2(int n)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2 * n - (2 * i + 1); k++)
            {
                cout << "*";
            }
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    int t;
    cin >> t;
    Solution obj1;
    Solution obj2;
    obj1.help1(t);
    obj2.help2(t);
    return 0;
}
