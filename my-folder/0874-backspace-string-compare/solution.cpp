class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i > 0)
            {
                if (s[i] == '#')
                {

                    s.erase(i - 1, 2);
                    i = i - 2;
                }
            }
            else
            {
                if (s[i] == '#')
                {
                    s.erase(i, 1);
                    i--;
                }
            }
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (i > 0)
            {
                if (t[i] == '#')
                {
                    t.erase(i - 1, 2);
                    i = i - 2;
                }
            }
            else
            {
                if (t[i] == '#')
                {

                    t.erase(i, 1);
                    i--;
                }
            }
        }
        if (s == t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
