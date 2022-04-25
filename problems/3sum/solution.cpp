class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;

        if (nums.size() < 3)
        {
            return ans;
        }
        sort(nums.begin(), nums.end());

        if (nums[0] > 0)
        {
            return ans;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> a;
            int j = i + 1, k = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            while (j < k)
            {

                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[k]);
                    ans.push_back(a);
                    a.clear();
                    int x = nums[j];
                    int y = nums[k];
                    while (j < k && x == nums[j])
                    {
                        j++;
                    }
                    while (j < k && y == nums[k])
                    {
                        k--;
                    }
                }
                else if (nums[i] + nums[j] + nums[k] < 0)
                {
                    j++;
                }
                else if (nums[i] + nums[j] + nums[k] > 0)
                {
                    k--;
                }
            }
        }
        return ans;
    }
};