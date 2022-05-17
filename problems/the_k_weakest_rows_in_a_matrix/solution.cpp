class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<pair<int, int>> matrix;
        int m = mat.size();
        int n = mat[0].size();
        for (int i = 0; i < m; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                count += mat[i][j];
            }
            matrix.push_back(make_pair(count, i));
        }
        sort(matrix.begin(), matrix.end());
        vector<int> ans(k, 0);
        for (int i = 0; i < k; i++)
        {
            ans[i] = matrix[i].second;
        }
        return ans;
    }
};