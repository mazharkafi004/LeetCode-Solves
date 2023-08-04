class Solution {
public:
    bool search(int pos, string s, unordered_set<string>& st, vector<int>& dp) {
        if (pos == s.size()) {
            return true;
        }
        if (dp[pos] != -1) {
            return dp[pos];
        }
        string temp;
        for (int j = pos; j < s.size(); j++) {
            temp += s[j];
            if (st.find(temp) != st.end()) {
                if (search(j + 1, s, st, dp)) {
                    return dp[pos] = true;
                }
            }
        }
        return dp[pos] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        for (auto word : wordDict) {
            st.insert(word);
        }
        vector<int> dp(s.size(), -1);
        return search(0, s, st, dp);
    }
};
