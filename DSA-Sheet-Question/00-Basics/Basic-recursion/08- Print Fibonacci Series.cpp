#include <bits/stdc++.h>
using namespace std;

void fib(int n, vector<int> &ans)
{
    if (n == 0 || n == 1)
    {
        ans.push_back(0);
        return;
    }
    if (n == 2)
    {
        ans.push_back(0);
        ans.push_back(1);
        return;
    }
    fib(n - 1, ans);
    ans.push_back(ans[n - 2] + ans[n - 3]);
    return;
}

vector<int> generateFibonacciNumbers(int n)
{
    // Write your code here.
    vector<int> ans;
    fib(n, ans);
    return ans;
}