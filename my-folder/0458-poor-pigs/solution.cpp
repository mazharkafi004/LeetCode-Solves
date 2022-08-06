class Solution
{
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest)
    {
        int max = 10, check = (minutesToTest / minutesToDie) + 1;
        for (int i = 0; i < max; i++)
        {
            if (pow(check, i) >= buckets)
            {
                return i;
            }
        }
        return max;
    }
};
