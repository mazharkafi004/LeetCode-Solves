class Solution
{
public:
    int reverse(long long  x)
    {
        if (x == 0)
        {
            return 0;
        }

        long long a;
        string s;
        s = to_string(x);
        int len = s.length();

        int y = 0;
        if (s[0] == '-')
        {

            int n = len - 1;
            for (int i = 1; i <= (len / 2); i++)
            {
                swap(s[i], s[n]);
                n = n - 1;
            }
        }
        else
        {

            int n = len - 1;
            for (int i = 0; i < (len / 2); i++)
            {
                swap(s[i], s[n]);
                n = n - 1;
            }
        }

        a = stoll(s);
     
        if (a < INT_MIN || a > INT_MAX)
        {
            return 0;
        }
        return a;
    }
};
