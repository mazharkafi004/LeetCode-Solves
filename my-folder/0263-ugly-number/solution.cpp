class Solution
{
public:
    bool isUgly(int n)
    {
        if (n < 1)
        {
            return false;
        }
        int a = 0;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else if (n % 3 == 0)
            {
                n = n / 3;
            }
            else if (n % 5 == 0)
            {
                n = n / 5;
            }
            else
            {
                a++;
                break;
            }
        }
        if(a == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};
