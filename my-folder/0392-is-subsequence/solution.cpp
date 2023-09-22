class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.length() == 0)
        {
            return true;
        }
        else if (t.length() == 0)
        {
            return false;
        }
        int l = 0, r = 0;
        while (r < t.length() )
        {
            if (s[l] == t[r])
            {
                if (l == s.length() - 1)
                {
                    return true;
                }
                l++;
            }
            r++;
        }
        return false;
    }
};
