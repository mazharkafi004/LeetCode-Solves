class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1){
            return s;
            }

        vector<string> vec(numRows, "");
        int n = s.length(), pos = 0, prev = -1;
        for (int i = 0; i < n; i++) {
            vec[pos] += s[i];
            if (pos == 0) {
                pos++;
                prev = pos - 1;
            } else if (pos == numRows - 1) { 
                pos--;
                prev = numRows - 1;
            } else if (pos > prev) {
                pos++;
                prev = pos - 1;
            } else {
                pos--;
                prev = pos + 1;
            }
        }
        string t;
        for (auto v : vec) {
            t += v;
        }
        return t;
    }
};

