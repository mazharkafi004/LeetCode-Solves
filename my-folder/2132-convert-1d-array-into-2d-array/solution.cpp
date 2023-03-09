class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& mat, int r, int c) {
        int n = mat.size();
        if(r*c!=n){
            return {};
        }
        vector<vector<int>> ans;

        for(int i=0;i<r;i++){
            vector<int> tm;
            for(int j=0;j<c;j++){
                 tm.push_back(mat[(c*i)+j]);
            }
            ans.push_back(tm);
        }
        
        return ans;
    }
};
