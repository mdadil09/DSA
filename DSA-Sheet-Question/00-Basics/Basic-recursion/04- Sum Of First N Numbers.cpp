// 1st method:

int help(long long n)
{
    if (n < 1)
        return 0;
    return n + help(n - 1);
}

long long sumFirstN(long long n)
{
    // Write your code here.
    return help(n);
}

// 2nd method:

long long sum = 0;
long long sumFirstN(long long n)
{
    // Write your code here.
    if (n > 0)
    {
        sum += n;
        sumFirstN(n - 1);
    }
    return sum;
}

// 3rd Method:

long long sumFirstN(long long n)
{
    // Write your code here.
    return n * (n + 1) / 2;
}