class Solution {
public:
    int fill(vector<vector<int>>& grid,int i,int j,int r,int c){
        if(i<0 || j<0 || i==r || j==c || grid[i][j]!=1){
            return 0;
        }
        grid[i][j] = 0;
        return 1 + fill(grid,i+1,j,r,c) + fill(grid,i-1,j,r,c) + fill(grid,i,j+1,r,c) + fill(grid,i,j-1,r,c);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int mx = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j]==1){
                    int a = fill(grid,i,j,r,c);
                    mx = max(a,mx);
                }
            }
        }
        return mx;
    }
};
