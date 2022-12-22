class Solution {
public:
    void fill(vector<vector<int>>& grid,int i,int j,int r,int c){
       if(i<0 || j<0 || i==r || j==c || grid[i][j]!=1){
           return;
       }
       grid[i][j] = -1;
       fill(grid,i+1,j,r,c);
       fill(grid,i-1,j,r,c);
       fill(grid,i,j+1,r,c);
       fill(grid,i,j-1,r,c);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0 || j==0 || i==r-1 || j==c-1){
                  if(grid[i][j]==1){
                  fill(grid,i,j,r,c);
                }
                }
                
            }
        }
        
        int count = 0;
          for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){            
                 if(grid[i][j]==1){
                     count++;
                 }            
            }
        }
        return count;
    }
};