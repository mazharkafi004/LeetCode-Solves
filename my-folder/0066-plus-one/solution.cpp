class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> ans;
        ans = digits;
        int len = digits.size();
        int carry = 0;
        if (digits[len - 1] == 9)
        {
            for (int i = len - 1; i >= 0; i--)
            {

                if (digits[i] == 9)
                {
                    if (i == 0)
                    {
                        if (len == 1)
                        {
                            ans[i] = 0;
                            ans.insert(ans.begin(), 1);
                        }
                        else
                        {
                            if (carry == 0)
                            {
                                ans[i] = digits[i];
                            }
                            else
                            {
                                ans[i] = 0;
                                ans.insert(ans.begin(), 1);
                            }
                        }
                    }
                    else if (i == len - 1)
                    {
                        ans[i] = 0;
                        carry++;
                    }

                    else
                    {
                        if (carry == 0)
                        {
                            ans[i] = digits[i];
                        }
                        else
                        {
                            ans[i] = 0;
                            carry++;
                        }
                    }
                }
                else
                {

                    if (carry == 0)
                    {
                        ans[i] = digits[i];
                    }
                    else
                    {
                        ans[i] = digits[i] + 1;
                        carry = 0;
                    }
                }
            }
        }
        else
        {
            ans[len - 1] = digits[len - 1] + 1;
        }
        return ans;
    }
};
