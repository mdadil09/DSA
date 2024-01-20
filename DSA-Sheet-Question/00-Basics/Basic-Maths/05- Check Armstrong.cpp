#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    // Write your code here
    int a = n;
    int x = n;
    int count = 0;
    while (x != 0)
    {
        count++;
        x = x / 10;
    }
    int sum = 0;
    while (n != 0)
    {
        int lastDigits = n % 10;
        sum += pow(lastDigits, count);
        n = n / 10;
    }
    return (sum == a);
}
