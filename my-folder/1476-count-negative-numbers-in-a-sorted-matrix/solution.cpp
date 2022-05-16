class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for (int i = 0; i < m; i++)
        {
            int l = 0, r = n - 1;
            while (l <= r)
            {
                int mid = (r - l) / 2 + l;

                if (grid[i][mid] < 0)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            count += n - l;
        }

        return count;
    }
};
