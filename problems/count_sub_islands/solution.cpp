class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int r, int c){
        if(i<0 || j<0 || i==r || j==c || grid[i][j]!=1){
            return;
        }
        grid[i][j] = 0;
        dfs(grid,i+1,j,r,c);
        dfs(grid,i-1,j,r,c);
        dfs(grid,i,j+1,r,c);
        dfs(grid,i,j-1,r,c);

    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int r = grid2.size();
        int c = grid2[0].size();
        for(int i = 0; i < r ; i++ ){
            for(int j = 0; j < c; j++){
                if(grid1[i][j]==0){
                    dfs(grid2,i,j,r,c);
                }
            }
        }
        int count  = 0;
         for(int i = 0; i < r ; i++ ){
            for(int j = 0; j < c; j++){
                if(grid2[i][j]==1){
                    dfs(grid2,i,j,r,c);
                    count++;
                }
            }
        }
        return count;
    }
};