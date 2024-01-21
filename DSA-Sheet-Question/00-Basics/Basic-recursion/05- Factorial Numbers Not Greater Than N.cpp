#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

void help(long long i, vector<long long> &fact, long long n)
{
    if (factorial(i) <= n)
    {
        fact.push_back(factorial(i));
        help(i + 1, fact, n);
    }
}

vector<long long> factorialNumbers(long long n)
{
    // Write Your Code Here
    vector<long long> ans;
    help(1, ans, n);
    return ans;
}