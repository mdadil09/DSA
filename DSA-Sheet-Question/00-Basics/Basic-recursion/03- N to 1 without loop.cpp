#include <bits/stdc++.h>
using namespace std;

void help(int i, int x, vector<int> &ans)
{
    if (i > x)
        return;
    help(i + 1, x, ans);
    ans.push_back(i);
}

vector<int> printNos(int x)
{
    // Write Your Code Here
    vector<int> ans;
    help(1, x, ans);
    return ans;
}