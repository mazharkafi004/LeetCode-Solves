class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        for (long long i = 0;; i++)
        {
            long long a = pow(4, i);
            if (a == n)
            {
                return true;
            }
            else if (a > n)
            {
                return false;
            }
        }
    }
};
