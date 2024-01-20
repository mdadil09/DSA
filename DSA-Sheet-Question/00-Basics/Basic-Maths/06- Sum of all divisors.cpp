// Brute force : O(n^2)

int sumOfAllDivisors(int n)
{
    // Write your code here.
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int sumOfDiv = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                sumOfDiv += j;
        }
        sum += sumOfDiv;
    }
    return sum;
}

// O(n);

int sumOfAllDivisors(int n)
{
    // Write your code here.
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (n / i) * i;
    }
    return sum;
}

// optimised solution;

int help(int n)
{
    long long int div = 0;
    int x = 1;
    while (x <= n)
    {
        int val = n / x;
        int y = n / val;

        div += ((y * (y + 1)) / 2 - (x * (x - 1)) / 2) * val;

        x = y + 1;
    }
    return div;
}

int sumOfAllDivisors(int n)
{
    // Write your code here.
    return help(n);
}