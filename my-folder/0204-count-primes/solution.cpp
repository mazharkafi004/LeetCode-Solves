class Solution
{
public:
    int countPrimes(int n)
    {
        if (n == 0 || n == 1)
        {
            return 0;
        }
        vector<int> p(n, true);
        p[0] = false;
        p[1] = false;

        for (int i = 0; i < sqrt(n); i++)
        {
            if (p[i] == true)
            {
                for (int j = i * i; j < n; j = j + i)
                {
                    p[j] = false;
                }
            }
        }
        int sum = 0;

        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == true)
            {
                sum++;
            }
        }
        return sum;
    }
};
