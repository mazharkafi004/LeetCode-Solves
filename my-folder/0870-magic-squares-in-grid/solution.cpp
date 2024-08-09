class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int numRows = grid.size();          
        int numCols = grid[0].size();       

        if (numRows < 3 || numCols < 3) {
            return 0;
        }
        
        int magicSquareCount = 0;  
        int targetSum = 0; 

        for (int row = 0; row <= numRows - 3; ++row) {
            for (int col = 0; col <= numCols - 3; ++col) {
                
                unordered_map<int, int> numberTracker = {
                    {0, 1}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, 
                    {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0}, 
                    {10, 1}, {11, 1}, {12, 1}, {13, 1}, {14, 1}, {15, 1}
                };
                
                bool isValidMagicSquare = true;  
                int mainDiagonalSum = 0;         
                int antiDiagonalSum = 0;      
                
                for (int i = 0; i < 3; ++i) {
                    int rowSum = 0;    
                    int colSum = 0;    
                    
                    for (int j = 0; j < 3; ++j) {
                        int currentValue = grid[row + i][col + j];                        
                        
                        if (numberTracker[currentValue] == 1) {
                            isValidMagicSquare = false;
                            break;
                        }
                        numberTracker[currentValue] = 1;  
                        
                        rowSum += currentValue;                  
                        colSum += grid[row + j][col + i];                              
                        if (i == j) {
                            mainDiagonalSum += grid[row + i][col + j];
                        }
                    }
                    
                    if (i == 0) {
                        targetSum = rowSum;
                    }
                    
                    if (!isValidMagicSquare || targetSum != rowSum || targetSum != colSum) {
                        isValidMagicSquare = false;
                        break;
                    }
                    
                    antiDiagonalSum += grid[row + i][col + (2 - i)];
                }
                
                if (isValidMagicSquare && targetSum == mainDiagonalSum && targetSum == antiDiagonalSum) {
                    ++magicSquareCount;
                }
            }
        }
        return magicSquareCount; 
    }
};

