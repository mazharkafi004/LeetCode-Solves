class Solution {
    int regionCount = 0; // To count the number of regions
    
public:
    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        
        // Create a 3*n by 3*n map to represent the grid with slashes
        vector<vector<bool>> map(3 * n, vector<bool>(3 * n, true));
        
        // Fill the map based on the slashes in the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '/') {
                    map[3 * i + 2][3 * j] = false;
                    map[3 * i + 1][3 * j + 1] = false;
                    map[3 * i][3 * j + 2] = false;
                } else if (grid[i][j] == '\\') {
                    map[3 * i][3 * j] = false;
                    map[3 * i + 1][3 * j + 1] = false;
                    map[3 * i + 2][3 * j + 2] = false;
                }
            }
        }
        
        // Perform DFS to find the number of regions
        for (int i = 0; i < 3 * n; i++) {
            for (int j = 0; j < 3 * n; j++) {
                if (map[i][j]) {
                    regionCount++;
                    performDFS(map, i, j);
                }
            }
        }
        
        return regionCount;
    }
    
private:
    void performDFS(vector<vector<bool>>& map, int row, int col) {
        if (row >= 0 && row < map.size() && col >= 0 && col < map[0].size() && map[row][col]) {
            map[row][col] = false; // Mark the cell as visited
            
            // Visit all adjacent cells
            performDFS(map, row - 1, col); // Up
            performDFS(map, row + 1, col); // Down
            performDFS(map, row, col - 1); // Left
            performDFS(map, row, col + 1); // Right
        }
    }
};

