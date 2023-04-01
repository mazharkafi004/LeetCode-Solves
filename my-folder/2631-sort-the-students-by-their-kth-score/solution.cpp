class Solution {
public:
    static bool comp(vector<int>& s1, vector<int>& s2, int tmp) {
        return s1[tmp] > s2[tmp];
    }
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(), score.end(), [&](vector<int>& s1, vector<int>& s2) {
            return comp(s1, s2, k);
        });
        return score;
    }
};

