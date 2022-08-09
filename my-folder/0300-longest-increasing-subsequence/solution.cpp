class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> ans;
        for (int i : nums)
        {
            if (ans.empty() || ans[ans.size() - 1] < i)
            {
                ans.push_back(i);
            }
            else
            {
                auto it = lower_bound(ans.begin(), ans.end(), i); 
                *it = i;                                        
            }
        }
        return ans.size();
    }
};
