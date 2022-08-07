class Solution
{
public:
    int countVowelPermutation(int n)
    {
        long long a = 1, e = 1, i = 1, o = 1, u = 1, modulo = pow(10, 9) + 7;
        long long a2 = 0, e2 = 0, i2 = 0, o2 = 0, u2 = 0;

        for (int k = 2; k <= n; k++)
        {
            a2 = (e + i + u) % modulo;
            e2 = (a + i) % modulo;
            i2 = (e + o) % modulo;
            o2 = i;
            u2 = (o + i) % modulo;

            a = a2, e = e2, i = i2, o = o2, u = u2;
        }

        return (a + e + i + o + u) % modulo;
    }
};
