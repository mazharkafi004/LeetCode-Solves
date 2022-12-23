class Solution {
public:
    bool isClosed(vector<vector<int>>& grid,int i,int j,int r,int c){
    if(i<0 || j<0 || i==r || j==c){
        return false;
    }
    if(grid[i][j]==1){
        return true;
    }
    grid[i][j] = 1;
    bool a = isClosed(grid,i+1,j,r,c);
    bool b = isClosed(grid,i-1,j,r,c);
    bool e = isClosed(grid,i,j+1,r,c);
    bool d = isClosed(grid,i,j-1,r,c);

    return a&&b&&e&&d;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int count = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j]==0){
                    if(isClosed(grid,i,j,r,c)){
                        count++;
                    }
                }
            }
        }
    return count;    
    }
};
