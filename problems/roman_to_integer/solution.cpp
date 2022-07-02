class Solution
{
public:
    int romanToInt(string s)
    {
        int number = 0;
        for (int i = 0; i < s.size();)
        {
            if (s[i] == 'M')
            {
                number += 1000;
                i++;
            }
            else if (s[i] == 'D')
            {
                number += 500;
                i++;
            }
            else if (s[i] == 'C')
            {
                if (i + 1 < s.size())
                {
                    if (s[i + 1] == 'M')
                    {
                        number += 900;
                        i += 2;
                    }
                    else if (s[i + 1] == 'D')
                    {
                        number += 400;
                        i += 2;
                    }
                    else
                    {
                        number += 100;
                        i++;
                    }
                }
                else
                {
                    number += 100;
                    i++;
                }
            }
            else if (s[i] == 'L')
            {
                number += 50;
                i++;
            }
            else if (s[i] == 'X')
            {
                if (i + 1 < s.size())
                {
                    if (s[i + 1] == 'C')
                    {
                        number += 90;
                        i += 2;
                    }
                    else if (s[i + 1] == 'L')
                    {
                        number += 40;
                        i += 2;
                    }
                    else
                    {
                        number += 10;
                        i++;
                    }
                }
                else
                {
                    number += 10;
                    i++;
                }
            }
            else if (s[i] == 'V')
            {
                number += 5;
                i++;
            }
            else if (s[i] == 'I')
            {
                if (i + 1 < s.size())
                {
                    if (s[i + 1] == 'X')
                    {
                        number += 9;
                        i += 2;
                    }
                    else if (s[i + 1] == 'V')
                    {
                        number += 4;
                        i += 2;
                    }
                    else
                    {
                        number += 1;
                        i++;
                    }
                }
                else
                {
                    number += 1;
                    i++;
                }
            }
        }

        return number;
    }
};