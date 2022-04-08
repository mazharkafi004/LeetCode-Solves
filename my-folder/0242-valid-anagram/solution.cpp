class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        int count = 0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t[i])
            {
                count++;
            }
            else
            {
                count = 0;
                break;
            }
        }
        if (count == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
