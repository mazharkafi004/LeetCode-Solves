class Solution
{
public:
    int fib(int n)
    {
        int f0 = 0, f1 = 1, f2 = 0;
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else
        {
            for (int i = 2; i <= n; i++)
            {

                f2 = f0 + f1;
                f0 = f1;
                f1 = f2;
            }
            return f2;
        }
    }
};
