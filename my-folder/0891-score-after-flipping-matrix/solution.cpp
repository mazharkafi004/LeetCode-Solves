




class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // Ensure all rows start with 1 if the first element is 0
        for(int i = 0; i < n; i++){
            if(grid[i][0] == 0){
                for(int j = 0; j < m; j++){
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }

        // Count the number of ones in each column and flip if necessary
        for(int x = 0; x < m; x++){
            int one = 0;
            for(int y = 0; y < n; y++){
                one += grid[y][x];
            }
            if(one < n - one){
                for(int z = 0; z < n; z++){
                    grid[z][x] = 1 - grid[z][x];
                }
            }
        }

        // Calculate the sum
        int sum = 0;
        // Precompute powers of 2
        vector<int> powers(m);
        for(int i = 0; i < m; i++){
            powers[i] = 1 << (m - i - 1);
        }
        for(int i = 0; i < n; i++){
            int num = 0;
            for(int j = 0; j < m; j++){
                num += grid[i][j] * powers[j];
            }
            sum += num;
        }
        return sum;
    }
};





