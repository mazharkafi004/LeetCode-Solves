class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long sum = 0, ans = 0;
        for (long long i = 1;; i++)
        {
            sum += i;
            if (sum > n)
            {
                ans = i - 1;
                break;
            }
            else if (sum == n)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};