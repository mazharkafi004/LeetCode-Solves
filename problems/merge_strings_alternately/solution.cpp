class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int m = word1.length(), n = word2.length();
        string ans(m + n, 'z');

        for (int i = 0; i <= (min(n, m) * 2); i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = word1[i / 2];
            }
            else
            {
                ans[i] = word2[i / 2];
            }
        }
        if (m > n)
        {
            for (int i = 0; i < m - n; i++)
            {
                ans[i + (n*2)] = word1[n + i];
            }
        }
        else if (m < n)
        {
            for (int i = 0; i < n - m; i++)
            {
                ans[i + (m*2)] = word2[m + i];
            }
        }

        return ans;
    }
};