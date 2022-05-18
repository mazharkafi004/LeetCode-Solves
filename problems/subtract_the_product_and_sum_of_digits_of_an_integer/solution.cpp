class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int product = 1, sum = 0;
        while (n != 0)
        {
            int check = n % 10;
            product *= check;
            sum += check;
            n = n / 10;
        }
        return product - sum;
    }
};