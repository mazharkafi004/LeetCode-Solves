class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int>mp_row;
        unordered_map<string,int>mp_col;
        int n = grid.size(), count = 0;
        for(int i = 0; i < n; i++) {
            string s;
            for(int j = 0; j < n; j++) {
                s += to_string(grid[i][j]) + ",";
            }
            mp_row[s]++;
        }
        
        for(int i = 0; i < n; i++) {
            string s;
            for(int j = 0; j < n; j++) {
                s += to_string(grid[j][i]) + ",";
            }
            mp_col[s]++;
        }
        for (auto& row : mp_row) {
            if (mp_col.find(row.first) != mp_col.end()) {
                count += row.second * mp_col[row.first];
            }
        }
        return count;
    }
};
