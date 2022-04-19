class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        int a = 0;
        if(n==1) {
            return true;
        }
        while (true)
        {
            if ((n % 3) == 0 && n > 0)
            {
                n = n / 3;
                a++;
                if (n == 1)
                {
                    break;
                }
            }
            else
            {
                a = 0;
                break;
            }
        }
        if (a == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};