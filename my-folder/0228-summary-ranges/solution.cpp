class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> ans;
        int a = 0;
        int n = nums.size();
        if (n == 0)
        {
            return ans;
        }
        else
        {
            a = nums[0];
            for (int i = 0; i < n; i++)
            {
                if (i == n - 1 || nums[i] != nums[i + 1] - 1)
                {
                    if (a != nums[i])
                    {
                        ans.push_back(to_string(a) + "->" + to_string(nums[i]));
                    }
                    else
                    {
                        ans.push_back(to_string(a));
                    }
                    if (i != n - 1)
                    {
                        a = nums[i + 1];
                    }
                }
            }
            return ans;
        }
    }
};
