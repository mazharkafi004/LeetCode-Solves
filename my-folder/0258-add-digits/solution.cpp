class Solution
{
public:
    int addDigits(int num)
    {
        string s = to_string(num);

        while (s.length() > 1)
        {
            int sum = 0;
            for (int i = 0; i < s.length(); i++)
            {
                sum += s[i] - '0';
            }
            s = to_string(sum);
        }
        return stoi(s);
    }
};
