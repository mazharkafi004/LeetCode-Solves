class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else if (n == 1)
        {
            return 0;
        }
        string temp;
        while (n != 0)
        {

            int a = n % 2;
            n = n / 2;
            if (a == 0)
            {
                temp += '1';
            }
            else
            {
                temp += '0';
            }
        }
        int ans = 0;
        for (int i = 0; i < temp.length(); i++)
        {

            ans += pow(2, i) * (temp[i] - '0');
        }
        return ans;
    }
};