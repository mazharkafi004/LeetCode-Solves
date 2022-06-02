class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        vector<vector<int>> ans;
        int n = matrix.size(), m = matrix[0].size(), l = 0, r = 0;
        while (r < m)
        {
            vector<int> temp;
            while (l < n)
            {
                temp.push_back(matrix[l][r]);
                l++;
            }
            ans.push_back(temp);
            l = 0, r++;
        }
        return ans;
    }
};