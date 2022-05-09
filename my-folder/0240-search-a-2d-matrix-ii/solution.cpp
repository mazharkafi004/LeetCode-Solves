class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int l = 0, r = matrix[0].size() - 1, m = matrix.size();
        while (l < m && r > -1)
        {
            if (matrix[l][r] == target)
            {
                return true;
            }
            else if (matrix[l][r] > target)
            {
                r--;
            }
            else if (matrix[l][r] < target)
            {
                l++;
            }
        }
        return false;
    }
};
