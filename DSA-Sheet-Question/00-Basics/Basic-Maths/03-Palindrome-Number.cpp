class Solution
{
public:
    bool isPalindrome(int x)
    {
        int rev = 0;
        int lastDigits = 0;
        if (x == 0)
            return true;
        if (x < 0 || x % 10 == 0)
            return false;
        while (x > rev)
        {
            lastDigits = lastDigits * 10 + x % 10;
            x = x / 10;
            rev = lastDigits;
        }
        if (x == rev || x == rev / 10)
            return true;
        else
            return false;
    }
};