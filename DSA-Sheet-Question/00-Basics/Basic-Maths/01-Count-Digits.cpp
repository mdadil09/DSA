
int countDigits(int n)
{
    // Write your code here.
    int count = 0;
    int num = n;
    while (num > 0)
    {
        int x = num % 10;
        if (x > 0)
        {
            if (n % x == 0)
                count++;
        }
        num = num / 10;
    }
    return count;
}