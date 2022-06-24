class Solution
{
public:
    string toHex(int num)
    {
        map<int, char> dig;
        char digit = '0';
        char a = 'a';
        for (int i = 0; i <= 15; i++)
        {
            if (i >= 10)
            {
                dig[i] = a++;
            }
            else
            {
                dig[i] = digit++;
            }
        }
        string ans = "";
        if (num == 0)
        {
            return "0";
        }
        else if (num > 0)
        {
            while (num != 0)
            {
                ans = dig[num % 16] + ans;
                num /= 16;
            }
        }
        else
        {
            u_int n = num;
            while (n != 0)
            {
                ans = dig[n % 16] + ans;
                n /= 16;
            }
        }
        return ans;
    }
};
