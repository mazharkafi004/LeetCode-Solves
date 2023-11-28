class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int left = 0, right = 0, n = s.length(), maxVow = 0, count = 0;

        while (right < n) {
            if (isVowel(s[right++])) {
                count++;
            }

            if (right - left == k) {
                maxVow = max(maxVow, count);
                if (isVowel(s[left++])) {
                    count--;
                }
            }
        }

        return maxVow;
    }
};
