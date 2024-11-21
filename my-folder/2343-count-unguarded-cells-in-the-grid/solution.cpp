class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> tracker(m, vector<int>(n, 1)); 
        for (const auto& wall : walls) {
            tracker[wall[0]][wall[1]] = -1;
        }
        for (const auto& guard : guards) {
            tracker[guard[0]][guard[1]] = -2;
        }

        for (const auto& guard : guards) {
            int x = guard[0];
            int y = guard[1];


            for (int a = y + 1; a < n; a++) {
                if (tracker[x][a] == -1 || tracker[x][a] == -2) break;
                tracker[x][a] = 0; 
            }

            // Left direction
            for (int a = y - 1; a >= 0; a--) {
                if (tracker[x][a] == -1 || tracker[x][a] == -2) break;
                tracker[x][a] = 0;
            }

            // Down direction
            for (int b = x + 1; b < m; b++) {
                if (tracker[b][y] == -1 || tracker[b][y] == -2) break;
                tracker[b][y] = 0;
            }

            // Up direction
            for (int b = x - 1; b >= 0; b--) {
                if (tracker[b][y] == -1 || tracker[b][y] == -2) break;
                tracker[b][y] = 0;
            }
        }

        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (tracker[i][j] == 1) { 
                    count++;
                }
            }
        }

        return count;
    }
};

