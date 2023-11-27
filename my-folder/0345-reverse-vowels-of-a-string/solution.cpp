class Solution
{
public:
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s)
    {
        int l = 0, r = s.size();
        while (l < r)
        {
            if (isVowel(s[l]) && isVowel(s[r]))
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if (!isVowel(s[l]))
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return s;
    }
};
