class Solution {
    int row, col;
    int gold=0;
    void dfs(int i, int j, int sum,  vector<vector<int>>& grid){
        if (i<0 ||i>=row|| j<0 || j>=col||grid[i][j]==0) return;
        int tmp=grid[i][j];
        sum+=tmp;
        gold=max(gold, sum);
        grid[i][j]=0;
        dfs(i+1, j, sum, grid);
        dfs(i-1, j, sum, grid);
        dfs(i, j+1, sum, grid);
        dfs(i, j-1, sum, grid);
        sum-=tmp;
        grid[i][j]=tmp;
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        row=grid.size(), col=grid[0].size();
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++){
                if (grid[i][j]!=0)
                    dfs(i, j, 0, grid);
            }
        return gold;
    }
};

