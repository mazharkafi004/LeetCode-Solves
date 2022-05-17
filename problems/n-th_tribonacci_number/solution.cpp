class Solution
{
public:
    int tribonacci(int n)
    {
        int f0 = 0, f1 = 1, f2 = 1, fn = 0;
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1 || n == 2)
        {
            return 1;
        }
        else
        {
            for (int i = 3; i <= n; i++)
            {

                fn = f0 + f1 + f2;
                f0 = f1;
                f1 = f2;
                f2 = fn;
            }
            return fn;
        }
    }
};