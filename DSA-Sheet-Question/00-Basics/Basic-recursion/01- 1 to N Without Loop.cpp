#include <bits/stdc++.h>
using namespace std;

vector<int> printNos(int x)
{
    // Write Your Code Here
    vector<int> ans;
    if (x == 0)
    {
        return ans;
    }
    ans = printNos(x - 1);
    ans.push_back(x);
    return ans;
}