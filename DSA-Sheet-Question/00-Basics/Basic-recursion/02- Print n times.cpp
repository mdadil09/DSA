#include <bits/stdc++.h>
using namespace std;

void help(int i, vector<string> &ans)
{
    if (i == 0)
    {
        return;
    }
    ans.push_back("Coding Ninjas");
    help(i - 1, ans);
}

vector<string> printNTimes(int n)
{
    // Write your code here.
    vector<string> ans;
    help(n, ans);
    return ans;
}