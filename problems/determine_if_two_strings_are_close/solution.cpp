class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        if (n != m) {
            return false;
        }

        vector<int> freq1(26, 0), freq2(26, 0);
        vector<int> count1(26, 0), count2(26, 0);

        for (char ch : word1) {
            freq1[ch - 'a']++;
            count1[ch - 'a'] = 1;
        }

        for (char ch : word2) {
            freq2[ch - 'a']++;
            count2[ch - 'a'] = 1;
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2 && count1 == count2;
    }
};
