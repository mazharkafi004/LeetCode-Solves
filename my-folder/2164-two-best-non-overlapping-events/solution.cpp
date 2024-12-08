class Solution {
public:
        int maxTwoEvents(vector<vector<int>>& events) {
        vector<tuple<int, bool, int>> proc; 
        int ans = 0, m = 0; 
        for (const auto& event : events) {
            int s = event[0], e = event[1], v = event[2];
            proc.emplace_back(s, true, v);
            proc.emplace_back(e + 1, false, v);
        }


        sort(proc.begin(), proc.end());


        for (const auto& [time, is_start, val] : proc) {
            if (is_start) {
                ans = max(ans, m + val);
            } else {
                m = max(m, val);
            }
        }

        return ans;
    }
};
