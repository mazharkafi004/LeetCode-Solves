class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        long long n = mat.size(), m = mat[0].size() - 1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i) == (m - i))
            {
                ans += mat[i][m - i];
            }
            else
            {
                ans += mat[i][m - i] + mat[i][i];
            }
            
        }
        return ans;
    }
};
