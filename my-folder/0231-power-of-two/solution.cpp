class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int a = 0;
        for (int i = 0; i <= sqrt(n) + 1; i++)
        {
            if (pow(2, i) == n)
            {
                a = 1;
                break;
            }
        }
        if (a == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
