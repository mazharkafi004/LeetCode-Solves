class Solution {
private:
    void spiral(vector<vector<int>>& matrix, int remaining_row, int remaining_column, vector<int>& result, int current_row, int current_col, int row_dir, int col_dir) {
        if (remaining_row == 0 || remaining_column == 0) {
            return;
        }
        for (int i = 0; i < remaining_column; i++) {
            current_row += row_dir; current_col += col_dir;
            result.push_back(matrix[current_row][current_col]);
        }
        spiral(matrix, remaining_column, remaining_row - 1, result, current_row, current_col, col_dir, -row_dir);
    }

public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        spiral(matrix, matrix.size(), matrix[0].size(), result, 0, -1, 0, 1);
        return result;
    }
};
