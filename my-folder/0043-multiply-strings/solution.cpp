class Solution
{
public:
    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
        {
            int a = 0;
            return to_string(a);
        }
        vector<int> ans(num1.size() + num2.size(), 0);
        for (int i = num1.size() - 1; i >= 0; i--)
        {

            for (int j = num2.size() - 1; j >= 0; j--)
            {
                int sum = ans[i + j + 1];
                sum += (num1[i] - '0') * (num2[j] - '0');
                ans[i + j] += sum / 10;
                ans[i + j + 1] = sum % 10;
            }
        }
        string result = "";
        int i = 0, j = 0;
        while (i < ans.size())
        {
            if (ans[i] == 0 && j == 0)
            {
                i++;
            }
            else
            {
                j = 1;
                result += to_string(ans[i]);
                i++;
            }
        }
        return result;
    }
};
