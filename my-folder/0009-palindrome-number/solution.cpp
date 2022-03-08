class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        int length = s.length();
        int mid = length / 2;
        int count = 0;

        for (int i = 0; i < mid; i++)
        {
            if (s[i] != s[length - (i + 1)])
            {
                count++;
            }
        }
        if (count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
