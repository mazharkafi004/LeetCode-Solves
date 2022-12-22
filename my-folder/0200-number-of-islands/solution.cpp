class Solution {
public:
    void mark_neighbours(int i,int j,vector<vector<char>>& grid,int rows,int col){
        if(i<0 || j<0 || i>=rows | j>=col || grid[i][j]!='1' ){
            return;
        }
        grid[i][j] = -1;
        mark_neighbours(i+1,j,grid,rows,col);
        mark_neighbours(i-1,j,grid,rows,col);
        mark_neighbours(i,j+1,grid,rows,col);
        mark_neighbours(i,j-1,grid,rows,col);
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        if(rows==0){
            return 0;
        }
        int col = grid[0].size();
        int island = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
               if(grid[i][j]=='1'){
                   island++;
                   mark_neighbours(i,j,grid,rows,col);
               }
            }
        }
        return island;
    }
};
