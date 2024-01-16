// pattern-17

//    A
//   A B A
// A B C B A

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void alphaHill(int n)
    {
        // Write your code here.
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            char ch = 'A';
            for (int k = 1; k <= 2 * i + 1; k++)
            {
                cout << ch << " ";
                if (k <= i)
                    ch++;
                else
                    ch--;
            }
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
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
        ob.alphaHill(n);
    }
    return 0;
}
