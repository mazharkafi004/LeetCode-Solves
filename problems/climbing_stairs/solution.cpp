class Solution
{
public:
    int climbStairs(int n)
    {

        long long ans = 0, a = 0, b = 1, temp = 0;
        for (long long i = 1; i <= n; i++)
        {
            ans = a + b;
            a = b;
            b = ans;
        }
        return ans;
    }
};