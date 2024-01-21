#include <bits/stdc++.h>
using namespace std;

bool help(int i, string &str)
{
    int n = str.size();
    if (i == n / 2)
        return true;
    if (str[i] != str[n - i - 1])
        return false;
    return help(i + 1, str);
}

bool isPalindrome(string &str)
{
    // Write your code here.

    return help(0, str);
}
