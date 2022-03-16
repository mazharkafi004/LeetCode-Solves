class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> a{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        if (digits.length() == 0)
        {
            return ans;
        }
        ans.push_back("");
        for (int i = 0; i < digits.length(); i++)
        {
            vector<string> temp;
            string s = a[digits[i] - '2'];
            for (int j = 0; j < s.length(); j++)
            {
                for (int k = 0; k < ans.size(); k++)
                {
                    temp.push_back(ans[k] + s[j]);
                }
            }
            swap(temp, ans);
        }

        return ans;
    }
};
