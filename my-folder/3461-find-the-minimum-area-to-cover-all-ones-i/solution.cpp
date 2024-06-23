class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int max_row = INT_MIN, min_row = INT_MAX, max_col = INT_MIN, min_col = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    min_row = min(min_row,i);
                    max_row = max(max_row,i);
                    min_col = min(min_col,j);
                    max_col = max(max_col,j);
                }
            }
        }
    if (min_row == INT_MAX) {
        return 0;
    }
    
    int height = max_row - min_row + 1;
    int width = max_col - min_col + 1;
    return height * width;
    }
};
