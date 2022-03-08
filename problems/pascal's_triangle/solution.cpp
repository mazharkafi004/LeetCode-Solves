class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> s;
        int count = 1;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> n;

            for (int j=0; j <= i; j++)
            {
                if (i == 0 || j == 0)
                {
                    count = 1;
                    n.push_back(count);
                }
                else
                {
                    count = count * (i - j + 1) / j;
                    n.push_back(count);
                }
            }
            s.push_back(n);
        }
        return s;
    }
};