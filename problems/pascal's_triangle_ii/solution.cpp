class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        int count = 1, a = 0;
        vector<int> n;
        for (long long i = 0; i <= rowIndex; i++)
        {

            for (long long j = 0; j <= i; j++)
            {
                if (i == 0 || j == 0)
                {
                    count = 1;
                    if (i == j && i == 0)
                    {
                        n.push_back(1);
                    }
                }
                else
                {
                    count = count * (i - j + 1) / j;

                    if (i == rowIndex)
                    {

                        n.push_back(count);
                    }
                }
            }
        }
        return n;
    }
};