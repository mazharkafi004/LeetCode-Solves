class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size();
        int odd_ind = -1, even_ind = -1;

        for (int i = 0; i < n - 1; i++) {
            if ((s[i] - '0') % 2 == 0 && (s[i + 1] - '0') % 2 == 0) {
                if (s[i] > s[i + 1]) {
                    even_ind = i;
                    break;
                }
            } else if ((s[i] - '0') % 2 == 1 && (s[i + 1] - '0') % 2 == 1) {
                if (s[i] > s[i + 1]) {
                    odd_ind = i;
                    break;
                }
            }
        }
        if (odd_ind != -1) {
            swap(s[odd_ind], s[odd_ind + 1]);
        }
        
        if (even_ind != -1) {
            swap(s[even_ind], s[even_ind + 1]);
        }
        
        return s;
    }
};
