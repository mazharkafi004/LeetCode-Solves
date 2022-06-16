class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int mx = INT_MIN;
        int start = 0, end = 0;
        unordered_map<char, int> charCounter;
        while (end < s.length())
        {
            charCounter[s[end]]++;
            while (charCounter[s[end]] > 1)
            {
                charCounter[s[start]]--;
                start++;
            }
            int count = (end - start) + 1;
            mx = max(count, mx);
            end++;
        }
        if (mx == INT_MIN)
        {
            return 0;
        }
        return mx;
    }
};
