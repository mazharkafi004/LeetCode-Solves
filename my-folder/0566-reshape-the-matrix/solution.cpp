class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        if(r*c!=m*n){
            return mat;
        }
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp.push_back(mat[i][j]);
            }
        }
        for(int i=0;i<r;i++){
            vector<int> tm;
            for(int j=0;j<c;j++){
                 tm.push_back(temp[(c*i)+j]);
            }
            ans.push_back(tm);
        }
        
        return ans;
    }
};
